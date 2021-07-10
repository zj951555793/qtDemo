#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPluginLoader>
//#include <QPluginItem>

#include <QDebug>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    loadPlugins();
}

MainWindow::~MainWindow()
{
    delete ui;
}

/**
 * @brief MainWindow::loadPlugins
 *   qobject_cast 可以隐式加载
 */
void MainWindow::loadPlugins()
{

    QApplication::addLibraryPath(m_libFolder);
    qDebug() << QApplication::libraryPaths();


    QPluginLoader loader(pluginPath);

    if( loader.load() && !loader.isLoaded())
    {
        qCritical() << loader.errorString();
    }
    qCritical() << loader.errorString();
     eInterface  =  qobject_cast<EchoInterface *>( loader.instance());
    if(!loader.isLoaded())
    {
        qCritical() << loader.errorString();
    }

    if(!eInterface)
    {
        QStringList typelist = eInterface->CalculateType();
        foreach (QString ctype, typelist)
        {
            ui->calType->addItem(ctype);
        }
    }



}


void MainWindow::on_pushButton_equal_clicked()
{
    bool ok = false;
    double item1 = ui->lineEdit->text().toDouble(&ok);
    double item2 = ui->lineEdit_2->text().toDouble(&ok);
    QString type = ui->calType->currentText();
    double res = eInterface->Calculate(type,item1, item2);
    ui->result->setText(QString::number(res));
}

void MainWindow::on_calType_currentTextChanged(const QString &arg1)
{
    ui->label_op->setText(arg1);
}

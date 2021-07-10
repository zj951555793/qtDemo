#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "echointerface.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_equal_clicked();

    void on_calType_currentTextChanged(const QString &arg1);

private:

    void loadPlugins();
    Ui::MainWindow *ui;

    EchoInterface *eInterface;
    const QString m_libFolder = ("C:/Innover");
#ifdef QT_NO_DEBUG
    const QString pluginPath = "EchoPluginLib";   // 暂时用Qt 宏定义做区分
#else
    const QString pluginPath = "EchoPluginLibd";
#endif
};
#endif // MAINWINDOW_H

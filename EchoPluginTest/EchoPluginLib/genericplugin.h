#ifndef GENERICPLUGIN_H
#define GENERICPLUGIN_H

#include "echointerface.h"

#include <QObject>
class GenericPlugin : public QObject,
                       public EchoInterface
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "EchoPluginTest.EchoPluginLib.EchoInterface" FILE "EchoPluginLib.json")
    //申明对象实现接口的IID 和 文件 -* 该IID 为唯一属性 *-
    Q_INTERFACES(EchoInterface)
   // 告诉插件实现了哪些接口
public:
    explicit GenericPlugin(QObject *parent = nullptr);



    // EchoInterface interface
public:
    QStringList CalculateType() const;
    double Calculate(QString &type, double xvar, double yvar);
};

#endif // GENERICPLUGIN_H

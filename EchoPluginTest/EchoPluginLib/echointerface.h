#ifndef ECHOINTERFACE_H
#define ECHOINTERFACE_H
#include <QStringList>
#include <QObject>

// 插件接口
class EchoInterface{

    //申明接口 IID
     Q_PLUGIN_METADATA(IID "EchoPluginTest.EchoPluginLib.EchoInterface" FILE "EchoPluginLib.json")

public:
    //EchoInterface(QObject *parent):QObject(parent){};
    virtual  ~EchoInterface(){} //虚析构 ，调用父类构造函数
    virtual QStringList CalculateType(void) const = 0;
    virtual double Calculate(QString &type,double xvar, double yvar) = 0;
};
#define EchoInterface_iid "EchoPluginTest.EchoPluginLib.EchoInterface"
Q_DECLARE_INTERFACE(EchoInterface, EchoInterface_iid)

 //申明接口
#endif // ECHOINTERFACE_H

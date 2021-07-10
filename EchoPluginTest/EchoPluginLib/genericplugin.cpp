#include "genericplugin.h"
#include <QString>

GenericPlugin::GenericPlugin(QObject *parent)
{
    Q_UNUSED(parent)
}

QStringList GenericPlugin::CalculateType() const
{
    return QStringList()<< tr("Add")<<tr("Sub");
}

double GenericPlugin::Calculate(QString &type, double xvar, double yvar)
{

    if(type == tr("Add"))
        return xvar + yvar;
    else if(type == tr("Sub"))
        return xvar - yvar;
    else return 0.0;
}


#include "QUuid_Ext.hpp"

namespace BH
{

std::string StdString_Cast(const QUuid & p_rUUID)
{
    return p_rUUID.toString().toStdString();
}

QString QString_Cast(const QUuid & p_rUUID)
{
    return p_rUUID.toString();
}

} // BH ns

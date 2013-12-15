#include "UUIDGenerator.hpp"
#include "QDebug"
#include <cassert>
#include "QUuid_Ext.hpp"

namespace BH
{

QUuid UUIDGenerator::GenNewUUID(const UUIDVer p_UUIDType, const QString & p_rNS, const QString & p_rData)
{
    switch (p_UUIDType)
    {
    case UUIDVer::V5:
        return QUuid::createUuidV5(p_rNS, p_rData);
    case UUIDVer::V3:
        return QUuid::createUuidV3(p_rNS,p_rData);
    case UUIDVer::Random:
        return QUuid::createUuid();

    case UUIDVer::V2:
    default:
        qDebug() << "UUIDGenerator::GenNewUUID : Unknown requested UUIDType.";
        assert(false);
    }
    qDebug() << "UUIDGenerator::GenNewUUID : Unexpected return.";
    assert(false);
    return QUuid();
}

QString UUIDGenerator::ToQString(const UUIDType & p_rUUID)
{
    return BH::QString_Cast(p_rUUID);
}

std::string UUIDGenerator::ToStdString(const UUIDType & p_rUUID)
{
    return BH::StdString_Cast(p_rUUID);
}

} // BH ns

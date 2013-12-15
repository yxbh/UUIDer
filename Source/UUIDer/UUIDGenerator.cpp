#include "UUIDGenerator.hpp"
#include "QDebug"
#include <cassert>
#include "QUuid_Ext.hpp"

namespace BH
{

QUuid UUIDGenerator::GenNewUUID(const UUIDVer p_UUIDType)
{
    const QUuid uuid_namespace;
    switch (p_UUIDType)
    {
    case UUIDVer::V5:
        return QUuid::createUuidV5(uuid_namespace, QString(""));
        break;
    case UUIDVer::V3:
        return QUuid::createUuidV3(uuid_namespace, QString(""));
        break;

    case UUIDVer::V2:
    default:
        qDebug() << "UUIDGenerator::GenNewUUID : Unknown requested UUIDType.";
        assert(false);
    }
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

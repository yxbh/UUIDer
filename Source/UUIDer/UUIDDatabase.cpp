#include "UUIDDatabase.hpp"
#include <cassert>
#include <QString>
#include <QDebug>

namespace BH
{

bool UUIDDatabase::s_IsReady = false;
QSqlDatabase UUIDDatabase::s_UUIDDB;

bool UUIDDatabase::InitConnection(const QString & p_DBPath)
{
    if (s_IsReady) // if there's already a connection, close it first.
        UUIDDatabase::CloseConnection();

    s_UUIDDB = QSqlDatabase::addDatabase("QSQLITE");
    s_UUIDDB.setHostName("UUIDer");
    s_UUIDDB.setDatabaseName(p_DBPath);
    s_UUIDDB.setUserName("Default");
    s_UUIDDB.setPassword("Default");
    s_IsReady = s_UUIDDB.open();

    if (!s_IsReady)
        qDebug() << "UUIDDatabase::InitConnection : " << s_UUIDDB.lastError();

    return s_IsReady;
}

void UUIDDatabase::CloseConnection(void)
{
    qDebug() << "UUIDDatabase::CloseConnection : closing current DB.";
    s_UUIDDB.close();
}

bool UUIDDatabase::IsReady(void)
{
    return s_IsReady;
}

void UUIDDatabase::GenNewUUID(const unsigned p_NumUUID)
{
    if (!s_IsReady)
        assert(false);

    // TODO : implementation.
}

const UUIDVector UUIDDatabase::GetUnusedUUIDs(const unsigned p_NumUUID)
{

    return UUIDVector();
}

} // BH ns

#pragma once
#include <QtSql>
#include <QSqlDatabase>
#include <vector>
#include <string>
#include "UUIDTypes.hpp"

namespace BH
{


class UUIDDatabase
{
private:
    static bool            s_IsReady;
    static QSqlDatabase    s_UUIDDB;

public:
static bool InitConnection(const QString & p_DBPath);
static void CloseConnection(void);

static bool IsReady(void);

static void GenNewUUID(const unsigned p_NumUUID);
static const UUIDVector GetUnusedUUIDs(const unsigned p_NumUUID);

}; // UUIDDatabase class


} // BH ns


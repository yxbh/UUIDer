#pragma once
#include <QtSql>
#include <QSqlDatabase>
#include <vector>
#include <string>
#include "UUID.hpp"

namespace BH
{


class UUIDDatabase
{
public:
    //typedef std::vector<int> UUIDList;
    using UUIDList = std::vector<int>;

private:
    static bool            s_IsReady;
    static QSqlDatabase    s_UUIDDB;

public:
static bool InitConnection(const std::string & p_DBPath);
static void CloseConnection(void);

static bool IsReady(void);

static void GenNewUUID(const unsigned p_NumUUID);
static const UUIDList GetUnusedUUIDs(const unsigned p_NumUUID);

}; // UUIDDatabase class


} // BH ns


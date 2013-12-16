#pragma once
#include <QUuid>
#include <vector>

namespace BH
{

/*! class UUIDerApp
 * */
class UUIDerApp
{
public:
    using UUIDerList = std::vector<QUuid>;

private:
    static UUIDerList s_CurrentUUIDList;

    //// display format
    static bool s_IsUsingHypens;
    static bool s_IsUsingCurlyBraces;
    static bool s_IsUsingUpperCases;
    ////

public:
    UUIDerApp(void) = delete;

    static UUIDerList & GetCurrentUUIDList(void);

    static QString CastCurrentUUIDListToQString(void);

    static bool IsUsingHypens(void);
    static bool IsUsingCurlyBraces(void);
    static bool IsUsingUpperCases(void);

    static void SetUsingHypens(const bool p_True = true);
    static void SetUsingCurlyBraces(const bool p_True = true);
    static void SetUsingUpperCases(const bool p_True = true);

}; // UUIDerApp class

} // BH ns

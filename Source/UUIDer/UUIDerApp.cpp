#include "UUIDerApp.hpp"

namespace BH
{

UUIDerApp::UUIDerList UUIDerApp::s_CurrentUUIDList;
bool UUIDerApp::s_IsUsingRandomDataForUUIDGeneration = true;
bool UUIDerApp::s_IsUsingHypens = true;
bool UUIDerApp::s_IsUsingCurlyBraces = true;
bool UUIDerApp::s_IsUsingUpperCases = false;

UUIDerApp::UUIDerList & UUIDerApp::GetCurrentUUIDList(void)
{
    return s_CurrentUUIDList;
}

QString UUIDerApp::CastCurrentUUIDListToQString(void)
{
    QString uuids_list_str;
    for (QUuid & uuid : s_CurrentUUIDList)
    {
        QString uuid_str(uuid.toString());

        if (!BH::UUIDerApp::IsUsingHypens()) // not using hypens
        {
            QString new_uuid_str;
            for (QString::value_type c : uuid_str)
                if (c != '-') new_uuid_str += c;
            uuid_str = new_uuid_str;
        }

        if (!BH::UUIDerApp::IsUsingCurlyBraces()) // not using braces
        {
            QString new_uuid_str;
            for (QString::value_type c : uuid_str)
                if (c != '{' && c != '}') new_uuid_str += c;
            uuid_str = new_uuid_str;
        }

        if (BH::UUIDerApp::IsUsingUpperCases())
        {
            for (QString::value_type & c_ref : uuid_str)
                if (c_ref.isLetter()) c_ref = c_ref.toUpper();
        }
        else
        {
            for (QString::value_type & c_ref : uuid_str)
                if (c_ref.isLetter()) c_ref = c_ref.toLower();
        }

        uuids_list_str += uuid_str + '\n';
    }

    return uuids_list_str;
}

bool UUIDerApp::IsUsingRandomDataForUUIDGeneration(void)
{
    return s_IsUsingRandomDataForUUIDGeneration;
}

bool UUIDerApp::IsUsingHypens(void)
{
    return s_IsUsingHypens;
}

bool UUIDerApp::IsUsingCurlyBraces(void)
{
    return s_IsUsingCurlyBraces;
}

bool UUIDerApp::IsUsingUpperCases(void)
{
    return s_IsUsingUpperCases;
}

void UUIDerApp::SetUsingRandomDataForUUIDGeneration(const bool p_True)
{
    s_IsUsingRandomDataForUUIDGeneration = p_True;
}

void UUIDerApp::SetUsingHypens(const bool p_True)
{
    s_IsUsingHypens = p_True;
}

void UUIDerApp::SetUsingCurlyBraces(const bool p_True)
{
    s_IsUsingCurlyBraces = p_True;
}

void UUIDerApp::SetUsingUpperCases(const bool p_True)
{
    s_IsUsingUpperCases = p_True;
}


}

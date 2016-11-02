#include <QUuid>
#include <QString>
#include <string>

namespace BH
{

extern std::string StdString_Cast(const QUuid & p_rUUID);
extern QString QString_Cast(const QUuid & p_rUUID);

} // BH ns

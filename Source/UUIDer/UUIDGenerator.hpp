#include <QUuid>
#include <string>

namespace BH
{

/*! class UUIDGenerator
 * */
class UUIDGenerator
{
public:
    using UUIDType = QUuid;

    enum class UUIDVer
    {
        V5,
        V3,
        V2,
    };

public:
    UUIDGenerator(void) = delete;

    static UUIDType GenNewUUID(const UUIDVer p_UUIDType = UUIDVer::V5);

    static QString ToQString(const UUIDType & p_rUUID);
    static std::string ToStdString(const UUIDType & p_rUUID);

}; // UUIDGenerator

} // BH ns

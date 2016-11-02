#include <QApplication>
#include "Controllers/UUIDerMainWindow.hpp"


int main(int argc, char * argv[])
{
    QCoreApplication::setOrganizationName(app::info::COMPANY);
    QCoreApplication::setApplicationName(app::info::PRODUCT);
    QCoreApplication::setApplicationVersion(app::version::FULL);

    QApplication app(argc, argv);

    UUIDerMainWindow UUIDer_MainWindow;
    UUIDer_MainWindow.show();

    const int app_result(app.exec());
    return app_result;
}

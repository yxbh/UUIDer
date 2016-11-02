#include <QApplication>
#include "Controllers/UUIDerMainWindow.hpp"
#include "Logics/UUIDDatabase.hpp"


int main(int p_Argc, char * p_Argv[])
{
    QApplication app(p_Argc, p_Argv);

    if (BH::UUIDDatabase::InitConnection("test.UUIDDB"))
        qDebug() << "DB connection succed.";
    else
        qDebug() << "DB connection failed.";

    UUIDerMainWindow UUIDer_MainWindow;
    UUIDer_MainWindow.show();

    const int app_result(app.exec());
    BH::UUIDDatabase::CloseConnection();

    return app_result;
}

#include "UUIDerMainWindow.hpp"
#include <QApplication>
#include "UUIDDatabase.hpp"


int main(int p_Argc, char * p_Argv[])
{
   if (BH::UUIDDatabase::InitConnection("test.UUIDDB"))
       qDebug() << "DB connection succed.";
   else
       qDebug() << "DB connection failed.";

    QApplication app(p_Argc, p_Argv);
    UUIDerMainWindow UUIDer_MainWindow;
    UUIDer_MainWindow.show();

    return app.exec();
}

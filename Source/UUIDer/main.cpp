#include "UUIDerMainWindow.hpp"
#include <QApplication>

int main(int p_Argc, char * p_Argv[])
{
    QApplication app(p_Argc, p_Argv);
    UUIDerMainWindow UUIDer_MainWindow;
    UUIDer_MainWindow.show();

    return app.exec();
}
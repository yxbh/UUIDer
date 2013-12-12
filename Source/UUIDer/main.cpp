#include "UUIDerMainWindow.hpp"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    UUIDerMainWindow w;
    w.show();

    return a.exec();
}

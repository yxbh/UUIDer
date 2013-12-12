#include "mainwindow.h"
#include <QApplication>

int main(int p_Argc, char * p_Argv[])
{
    QApplication app(p_Argc, p_Argv);
    MainWindow main_window(nullptr);
    main_window.show();

    return app.exec();
}

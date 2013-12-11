#include "mainwindow.h"
#include <QApplication>

int main(const int argc, const char * const argv[])
{
	QApplication a(argc, argv);
	MainWindow w(nullptr);
	w.show();

	return a.exec();
}

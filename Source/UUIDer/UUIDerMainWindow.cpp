#include "UUIDerMainWindow.hpp"
#include "ui_mainwindow.h"

UUIDerMainWindow::UUIDerMainWindow(QWidget *parent) :
	QMainWindow(parent),
    ui(new Ui::UUIDerMainWindow)
{
	ui->setupUi(this);
}

UUIDerMainWindow::~UUIDerMainWindow()
{
	delete ui;
}

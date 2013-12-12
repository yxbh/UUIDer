#include "UUIDerMainWindow.hpp"
#include "ui_UUIDerMainWindow.h"

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

void UUIDerMainWindow::on_actionNew_triggered()
{

}

#include "UUIDerAboutDialog.hpp"
#include "ui_UUIDerAboutDialog.h"

UUIDerAboutDialog::UUIDerAboutDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UUIDerAboutDialog)
{
    ui->setupUi(this);
}

UUIDerAboutDialog::~UUIDerAboutDialog()
{
    delete ui;
}

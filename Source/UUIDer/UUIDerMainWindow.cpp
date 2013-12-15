#include "UUIDerMainWindow.hpp"
#include "ui_UUIDerMainWindow.h"
#include <QFileDialog>
#include <QMessageBox>
#include "UUIDDatabase.hpp"
#include "UUIDerAboutDialog.hpp"

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
    static const QString title("New DB");
    static const QString dir("");
    static const QString filter("All (*.*);;DB Type (*.UUIDDB)");
    QString selected_filter("DB Type (*.UUIDDB)");
    const QString path(QFileDialog::getSaveFileName(this, title, dir, filter, &selected_filter));
    if (path.size() > 0)
    {
        if (BH::UUIDDatabase::InitConnection(path))
        {
            // TODO : implementation.
        }
        else
            QMessageBox::critical(this, "Failure", "Failure to open DB file!");
    }
    else
        qDebug() << "UUIDerMainWindow::on_actionNew_triggered : action cancelled.";
}

void UUIDerMainWindow::on_actionAbout_triggered()
{
    static UUIDerAboutDialog * about_dialog_ptr(new UUIDerAboutDialog(this));
    about_dialog_ptr->show();
}

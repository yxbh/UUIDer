#include "UUIDerMainWindow.hpp"
#include "ui_UUIDerMainWindow.h"
#include <QFileDialog>
#include <QMessageBox>
#include "UUIDDatabase.hpp"
#include "UUIDerAboutDialog.hpp"
#include "UUIDGenerator.hpp"
#include <cassert>

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

void UUIDerMainWindow::on_Button_GenNewUUID_clicked()
{
    //// get specified generator type.
    BH::UUIDGenerator::UUIDVer uuid_ver;
    if (ui->RadioButton_GenType_Random->isChecked())
        uuid_ver = BH::UUIDGenerator::UUIDVer::Random;
    else if (ui->RadioButton_GenType_V3->isChecked())
        uuid_ver = BH::UUIDGenerator::UUIDVer::V3;
    else if (ui->RadioButton_GenType_V5->isChecked())
        uuid_ver = BH::UUIDGenerator::UUIDVer::V5;
    else
    {
        assert(false);
        return;
    }
    ////

    //// get namespace & data
    QString uuid_namespace("");
    QString uuid_data("");
    if (uuid_ver == BH::UUIDGenerator::UUIDVer::V3
            || uuid_ver == BH::UUIDGenerator::UUIDVer::V5)
    {
        uuid_namespace = ui->LineEdit_UUIDGen_Namespace->text();
        uuid_data = ui->LineEdit_UUIDGen_Data->text();
    }
    ////

    const unsigned num_UUID_to_gen(ui->SpinBox_NumUUIDToGen->value());
    auto display_box(ui->TextBrowser_UUIDs);
    display_box->clear();
    QString UUIDs;
    for (unsigned i{0}; i != num_UUID_to_gen; ++i)
    {
        UUIDs += BH::UUIDGenerator::GenNewUUID(uuid_ver, uuid_namespace, uuid_data).toString() + '\n';
    }
    display_box->setText(UUIDs);
}

#include "UUIDerMainWindow.hpp"
#include "ui_UUIDerMainWindow.h"
#include <QFileDialog>
#include <QMessageBox>
#include "UUIDDatabase.hpp"
#include "UUIDerAboutDialog.hpp"
#include "UUIDGenerator.hpp"
#include <cassert>
#include "UUIDerApp.hpp"

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

void UUIDerMainWindow::on_PushButton_GenNewUUID_clicked()
{
    //// get specified generator type.
    BH::UUIDGenerator::UUIDVer uuid_ver;
    if (ui->RadioButton_GenType_V4->isChecked())
        uuid_ver = BH::UUIDGenerator::UUIDVer::Random;
    else if (ui->RadioButton_GenType_V3->isChecked())
        uuid_ver = BH::UUIDGenerator::UUIDVer::V3;
    else if (ui->RadioButton_GenType_V5->isChecked())
        uuid_ver = BH::UUIDGenerator::UUIDVer::V5;
    else
    {
        ui->statusBar->showMessage(QString("Invalid generator type!"));
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

    //// Begin UUID generation.
    const unsigned num_UUID_to_gen(ui->SpinBox_NumUUIDToGen->value());
    auto display_box(ui->TextBrowser_UUIDs);
    display_box->clear();
    ui->statusBar->showMessage(QString("Begining UUID generation..."));
    BH::UUIDerApp::UUIDerList & current_uuid_list(BH::UUIDerApp::GetCurrentUUIDList());
    current_uuid_list.clear();
    current_uuid_list.reserve(num_UUID_to_gen);
    for (unsigned i{0}; i != num_UUID_to_gen; ++i)
    {
        current_uuid_list.push_back(BH::UUIDGenerator::GenNewUUID(uuid_ver, uuid_namespace, uuid_data));
    }
    ////

    //// Prepare for display
    display_box->setText(BH::UUIDerApp::CastCurrentUUIDListToQString());
    ////

    //// Finished! Report status.
    if (num_UUID_to_gen > 1)
        ui->statusBar->showMessage(QString::number(num_UUID_to_gen) + QString(" UUIDs were generated."));
    else
        ui->statusBar->showMessage(QString("1 UUID was generated."));
    ////
}

void UUIDerMainWindow::on_CheckBox_DisplayCurlyBraces_stateChanged(int arg1)
{
    switch (arg1)
    {
    case Qt::CheckState::Checked:
        BH::UUIDerApp::SetUsingCurlyBraces(true);
        break;
    case Qt::CheckState::Unchecked:
        BH::UUIDerApp::SetUsingCurlyBraces(false);
        break;
    default:
        assert(false);
    }
    ui->TextBrowser_UUIDs->setText(BH::UUIDerApp::CastCurrentUUIDListToQString());
}

void UUIDerMainWindow::on_CheckBox_DisplayUpperCases_stateChanged(int arg1)
{
    switch (arg1)
    {
    case Qt::CheckState::Checked:
        BH::UUIDerApp::SetUsingUpperCases(true);
        break;
    case Qt::CheckState::Unchecked:
        BH::UUIDerApp::SetUsingUpperCases(false);
        break;
    default:
        assert(false);
    }
    ui->TextBrowser_UUIDs->setText(BH::UUIDerApp::CastCurrentUUIDListToQString());
}

void UUIDerMainWindow::on_CheckBox_DisplayHypens_stateChanged(int arg1)
{
    switch (arg1)
    {
    case Qt::CheckState::Checked:
        BH::UUIDerApp::SetUsingHypens(true);
        break;
    case Qt::CheckState::Unchecked:
        BH::UUIDerApp::SetUsingHypens(false);
        break;
    default:
        assert(false);
    }
    ui->TextBrowser_UUIDs->setText(BH::UUIDerApp::CastCurrentUUIDListToQString());
}

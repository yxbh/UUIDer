#include "UUIDerMainWindow.hpp"
#include "ui_UUIDerMainWindow.h"

#include <cassert>
#include <QFileDialog>
#include <QMessageBox>
#include "UUIDerAboutDialog.hpp"
#include "Logics/RandomStringGenerator.hpp"
#include "Logics/UUIDGenerator.hpp"
#include "../UUIDerApp.hpp"

UUIDerMainWindow::UUIDerMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::UUIDerMainWindow)
{
    this->ui->setupUi(this);
    this->ui->Frame_GenSpecOptions->hide();
}

UUIDerMainWindow::~UUIDerMainWindow(void)
{
    delete ui;
}

void UUIDerMainWindow::on_action_Exit_triggered(void)
{
    this->close();
}

void UUIDerMainWindow::on_action_About_triggered(void)
{
    (new UUIDerAboutDialog(this))->show();
}

void UUIDerMainWindow::on_action_AboutQt_triggered(void)
{
    qApp->aboutQt();
}

void UUIDerMainWindow::on_PushButton_GenNewUUID_clicked(void)
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
    auto display_box(ui->TextBrowser_UUIDs);
    display_box->clear();
    ui->statusBar->showMessage(QString("Begining UUID generation..."));
    BH::UUIDerApp::UUIDerList & current_uuid_list(BH::UUIDerApp::GetCurrentUUIDList());
    current_uuid_list.clear();
    const unsigned num_UUID_to_gen(ui->SpinBox_NumUUIDToGen->value());
    current_uuid_list.reserve(num_UUID_to_gen);
    if (uuid_ver == BH::UUIDGenerator::UUIDVer::Random) // V4 (random)
    {
        for (unsigned i{0}; i != num_UUID_to_gen; ++i)
            current_uuid_list.push_back(BH::UUIDGenerator::GenNewUUID(uuid_ver));
    }
    else if (BH::UUIDerApp::IsUsingRandomDataForUUIDGeneration()) // V3 or V5
    {
        for (unsigned i{0}; i != num_UUID_to_gen; ++i)
            current_uuid_list.push_back(BH::UUIDGenerator::GenNewUUID(uuid_ver, uuid_namespace, BH::RandomStringGenerator::Generate()));
    }
    else // V3 or V5 (generate 1 only)
        current_uuid_list.push_back(BH::UUIDGenerator::GenNewUUID(uuid_ver, uuid_namespace, uuid_data));

    ////

    //// Prepare for display
    ui->statusBar->showMessage("Formating UUIDs...");
    display_box->setText(BH::UUIDerApp::CastCurrentUUIDListToQString());
    ////

    //// Finished! Report status.
    if (num_UUID_to_gen > 1)
        ui->statusBar->showMessage(QString::number(num_UUID_to_gen) + QString(" UUIDs were generated."));
    else
        ui->statusBar->showMessage(QString("1 UUID was generated."));
    ////
}

void UUIDerMainWindow::on_PushButton_ClearTextBrowser_clicked(void)
{
    BH::UUIDerApp::GetCurrentUUIDList().clear();
}

void UUIDerMainWindow::on_CheckBox_DisplayCurlyBraces_stateChanged(int checkState)
{
    switch (checkState)
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

void UUIDerMainWindow::on_CheckBox_DisplayUpperCases_stateChanged(int checkState)
{
    switch (checkState)
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

void UUIDerMainWindow::on_CheckBox_DisplayHypens_stateChanged(int checkState)
{
    switch (checkState)
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

void UUIDerMainWindow::on_CheckBox_UseRanDataForUUIDGeneration_stateChanged(int checkState)
{
    switch (checkState)
    {
    case Qt::CheckState::Checked:
        BH::UUIDerApp::SetUsingRandomDataForUUIDGeneration(true);
        ui->SpinBox_NumUUIDToGen->setEnabled(true);
        break;
    case Qt::CheckState::Unchecked:
        BH::UUIDerApp::SetUsingRandomDataForUUIDGeneration(false);
        ui->SpinBox_NumUUIDToGen->setValue(1);
        ui->SpinBox_NumUUIDToGen->setEnabled(false);
        break;
    default:
        assert(false);
    }
}

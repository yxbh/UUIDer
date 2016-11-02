#include "UUIDerAboutDialog.hpp"
#include "ui_UUIDerAboutDialog.h"

#include "version.hpp"
#include "appinfo.hpp"

UUIDerAboutDialog::UUIDerAboutDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UUIDerAboutDialog)
{
    this->setAttribute(Qt::WA_DeleteOnClose);
    this->ui->setupUi(this);
    this->setFixedSize(this->size());
    this->setWindowFlags(this->windowFlags() & ~Qt::WindowContextHelpButtonHint);

    auto aboutContent = this->ui->textBrowser->document()->toHtml();
    aboutContent
            .replace("%APP_INFO_PRODUCT%", app::info::PRODUCT)
            .replace("%APP_INFO_DESCRIPTION%", app::info::DESCRIPTION)
            .replace("%APP_INFO_COPYRIGHT%", app::info::COPYRIGHT)
            .replace("%APP_VER_FULL%", app::version::FULL);
    this->ui->textBrowser->document()->setHtml(aboutContent);
}

UUIDerAboutDialog::~UUIDerAboutDialog(void)
{
    delete ui;
}

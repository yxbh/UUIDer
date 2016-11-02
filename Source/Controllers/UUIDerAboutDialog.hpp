#ifndef UUIDERABOUTDIALOG_HPP
#define UUIDERABOUTDIALOG_HPP

#include <QDialog>

namespace Ui {
class UUIDerAboutDialog;
}

class UUIDerAboutDialog : public QDialog
{
    Q_OBJECT

public:
    explicit UUIDerAboutDialog(QWidget *parent = 0);
    ~UUIDerAboutDialog();

private:
    Ui::UUIDerAboutDialog *ui;
};

#endif // UUIDERABOUTDIALOG_HPP

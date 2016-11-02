#ifndef UUIDERABOUTDIALOG_HPP
#define UUIDERABOUTDIALOG_HPP

#include <QDialog>

namespace Ui {
class UUIDerAboutDialog;
}

class UUIDerAboutDialog : public QDialog
{
    Q_OBJECT

private:
    Ui::UUIDerAboutDialog *ui;

public:
    explicit UUIDerAboutDialog(QWidget *parent = nullptr);
    ~UUIDerAboutDialog(void);
};

#endif // UUIDERABOUTDIALOG_HPP

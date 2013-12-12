#ifndef UUIDERMAINWINDOW_HPP
#define UUIDERMAINWINDOW_HPP

#include <QMainWindow>

namespace Ui {
class UUIDerMainWindow;
}

class UUIDerMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit UUIDerMainWindow(QWidget *parent = 0);
    ~UUIDerMainWindow();

private:
    Ui::UUIDerMainWindow *ui;
};

#endif // UUIDERMAINWINDOW_HPP

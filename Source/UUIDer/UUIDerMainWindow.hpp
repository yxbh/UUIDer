#pragma once
#include <QMainWindow>

namespace Ui
{
class UUIDerMainWindow;
}

class UUIDerMainWindow
	: public QMainWindow
{
private:
	Q_OBJECT

    Ui::UUIDerMainWindow *ui;

public:
    ~UUIDerMainWindow(void);
    explicit UUIDerMainWindow(QWidget * const p_pParent = nullptr);

}; // MainWindow class

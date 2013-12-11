#pragma once
#include <QMainWindow>

namespace Ui
{
class MainWindow;
}

class MainWindow
	: public QMainWindow
{
private:
	Q_OBJECT

	Ui::MainWindow *ui;

public:
	~MainWindow(void);
	explicit MainWindow(QWidget * const p_pParent = nullptr);

}; // MainWindow class

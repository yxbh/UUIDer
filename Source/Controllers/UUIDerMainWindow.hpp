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

private slots:
    void on_actionNew_triggered();

    void on_actionAbout_triggered();

    void on_PushButton_GenNewUUID_clicked();

    void on_CheckBox_DisplayCurlyBraces_stateChanged(int arg1);

    void on_CheckBox_DisplayUpperCases_stateChanged(int arg1);

    void on_CheckBox_DisplayHypens_stateChanged(int arg1);

    void on_Button_ClearTextBrowser_clicked();

    void on_PushButton_GenNewUUIDForDB_clicked();

    void on_PushButton_GetUUIDs_clicked();

    void on_CheckBox_UseRanDataForUUIDGeneration_stateChanged(int arg1);

    void on_actionAbout_Qt_triggered(void);

private:
    Ui::UUIDerMainWindow *ui;
};

#endif // UUIDERMAINWINDOW_HPP

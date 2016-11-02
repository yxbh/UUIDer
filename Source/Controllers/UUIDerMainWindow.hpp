#ifndef UUIDERMAINWINDOW_HPP
#define UUIDERMAINWINDOW_HPP

#include <QMainWindow>

namespace Ui {
class UUIDerMainWindow;
}

class UUIDerMainWindow : public QMainWindow
{
    Q_OBJECT

private:
    Ui::UUIDerMainWindow *ui;

public:
    explicit UUIDerMainWindow(QWidget *parent = nullptr);
    ~UUIDerMainWindow(void);

private slots:
    void on_action_Exit_triggered(void);
    void on_action_About_triggered(void);
    void on_action_AboutQt_triggered(void);

    void on_PushButton_GenNewUUID_clicked(void);
    void on_PushButton_ClearTextBrowser_clicked(void);
    void on_CheckBox_DisplayCurlyBraces_stateChanged(int checkState);
    void on_CheckBox_DisplayUpperCases_stateChanged(int checkState);
    void on_CheckBox_DisplayHypens_stateChanged(int checkState);
    void on_CheckBox_UseRanDataForUUIDGeneration_stateChanged(int checkState);
};

#endif // UUIDERMAINWINDOW_HPP

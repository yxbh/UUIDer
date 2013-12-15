/********************************************************************************
** Form generated from reading UI file 'UUIDerAboutDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UUIDERABOUTDIALOG_H
#define UI_UUIDERABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_UUIDerAboutDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QTextBrowser *textBrowser;
    QPushButton *CloseDialogButton;

    void setupUi(QDialog *UUIDerAboutDialog)
    {
        if (UUIDerAboutDialog->objectName().isEmpty())
            UUIDerAboutDialog->setObjectName(QStringLiteral("UUIDerAboutDialog"));
        UUIDerAboutDialog->resize(301, 202);
        verticalLayout_2 = new QVBoxLayout(UUIDerAboutDialog);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        textBrowser = new QTextBrowser(UUIDerAboutDialog);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        verticalLayout->addWidget(textBrowser);

        CloseDialogButton = new QPushButton(UUIDerAboutDialog);
        CloseDialogButton->setObjectName(QStringLiteral("CloseDialogButton"));

        verticalLayout->addWidget(CloseDialogButton);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(UUIDerAboutDialog);
        QObject::connect(CloseDialogButton, SIGNAL(clicked()), UUIDerAboutDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(UUIDerAboutDialog);
    } // setupUi

    void retranslateUi(QDialog *UUIDerAboutDialog)
    {
        UUIDerAboutDialog->setWindowTitle(QApplication::translate("UUIDerAboutDialog", "Dialog", 0));
        textBrowser->setHtml(QApplication::translate("UUIDerAboutDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:600;\">UUIDer</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; font-weight:600;\">(V0.0.1 Alpha)</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0p"
                        "x; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">A simple UUID generator &amp; storer.</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; font-weight:600;\">Author</span><span style=\" font-size:8pt;\">: YanXiang Benjamin Huang</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Copyright Infinity Box Studios 2013 \302\251.</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-"
                        "size:8pt;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Check us out at:</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"htttp://www.InfinityBoxStudios.com\"><span style=\" font-size:8pt; text-decoration: underline; color:#0000ff;\">htttp://www.InfinityBoxStudios.com</span></a></p></body></html>", 0));
#ifndef QT_NO_TOOLTIP
        CloseDialogButton->setToolTip(QApplication::translate("UUIDerAboutDialog", "Close this dialog.", 0));
#endif // QT_NO_TOOLTIP
        CloseDialogButton->setText(QApplication::translate("UUIDerAboutDialog", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class UUIDerAboutDialog: public Ui_UUIDerAboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UUIDERABOUTDIALOG_H

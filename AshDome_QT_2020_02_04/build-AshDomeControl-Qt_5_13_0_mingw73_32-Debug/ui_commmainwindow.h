/********************************************************************************
** Form generated from reading UI file 'commmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMMMAINWINDOW_H
#define UI_COMMMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CommMainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton_Init;
    QPushButton *pushButton_2_Stop;
    QLabel *label;
    QLabel *label_2;
    QComboBox *comboBox_Port;
    QComboBox *comboBox_2_Speed;
    QPlainTextEdit *serial_plainTextEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *CommMainWindow)
    {
        if (CommMainWindow->objectName().isEmpty())
            CommMainWindow->setObjectName(QString::fromUtf8("CommMainWindow"));
        CommMainWindow->resize(400, 300);
        centralWidget = new QWidget(CommMainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushButton_Init = new QPushButton(centralWidget);
        pushButton_Init->setObjectName(QString::fromUtf8("pushButton_Init"));
        pushButton_Init->setGeometry(QRect(10, 220, 51, 20));
        pushButton_2_Stop = new QPushButton(centralWidget);
        pushButton_2_Stop->setObjectName(QString::fromUtf8("pushButton_2_Stop"));
        pushButton_2_Stop->setGeometry(QRect(80, 220, 51, 20));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 160, 43, 13));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 190, 43, 13));
        comboBox_Port = new QComboBox(centralWidget);
        comboBox_Port->setObjectName(QString::fromUtf8("comboBox_Port"));
        comboBox_Port->setGeometry(QRect(70, 150, 63, 22));
        comboBox_2_Speed = new QComboBox(centralWidget);
        comboBox_2_Speed->setObjectName(QString::fromUtf8("comboBox_2_Speed"));
        comboBox_2_Speed->setGeometry(QRect(70, 180, 63, 22));
        serial_plainTextEdit = new QPlainTextEdit(centralWidget);
        serial_plainTextEdit->setObjectName(QString::fromUtf8("serial_plainTextEdit"));
        serial_plainTextEdit->setGeometry(QRect(150, 10, 241, 231));
        CommMainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(CommMainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 20));
        CommMainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(CommMainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        CommMainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(CommMainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        CommMainWindow->setStatusBar(statusBar);

        retranslateUi(CommMainWindow);

        QMetaObject::connectSlotsByName(CommMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *CommMainWindow)
    {
        CommMainWindow->setWindowTitle(QCoreApplication::translate("CommMainWindow", "CommMainWindow", nullptr));
        pushButton_Init->setText(QCoreApplication::translate("CommMainWindow", "Init", nullptr));
        pushButton_2_Stop->setText(QCoreApplication::translate("CommMainWindow", "Stop", nullptr));
        label->setText(QCoreApplication::translate("CommMainWindow", "Port", nullptr));
        label_2->setText(QCoreApplication::translate("CommMainWindow", "Speed", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CommMainWindow: public Ui_CommMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMMMAINWINDOW_H

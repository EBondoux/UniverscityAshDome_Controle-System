/********************************************************************************
** Form generated from reading UI file 'commmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMMMAINWINDOW_H
#define UI_COMMMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
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
            CommMainWindow->setObjectName(QStringLiteral("CommMainWindow"));
        CommMainWindow->resize(400, 300);
        centralWidget = new QWidget(CommMainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton_Init = new QPushButton(centralWidget);
        pushButton_Init->setObjectName(QStringLiteral("pushButton_Init"));
        pushButton_Init->setGeometry(QRect(10, 220, 51, 20));
        pushButton_2_Stop = new QPushButton(centralWidget);
        pushButton_2_Stop->setObjectName(QStringLiteral("pushButton_2_Stop"));
        pushButton_2_Stop->setGeometry(QRect(80, 220, 51, 20));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 160, 43, 13));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 190, 43, 13));
        comboBox_Port = new QComboBox(centralWidget);
        comboBox_Port->setObjectName(QStringLiteral("comboBox_Port"));
        comboBox_Port->setGeometry(QRect(70, 150, 63, 22));
        comboBox_2_Speed = new QComboBox(centralWidget);
        comboBox_2_Speed->setObjectName(QStringLiteral("comboBox_2_Speed"));
        comboBox_2_Speed->setGeometry(QRect(70, 180, 63, 22));
        serial_plainTextEdit = new QPlainTextEdit(centralWidget);
        serial_plainTextEdit->setObjectName(QStringLiteral("serial_plainTextEdit"));
        serial_plainTextEdit->setGeometry(QRect(150, 10, 241, 231));
        CommMainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(CommMainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 20));
        CommMainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(CommMainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        CommMainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(CommMainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        CommMainWindow->setStatusBar(statusBar);

        retranslateUi(CommMainWindow);

        QMetaObject::connectSlotsByName(CommMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *CommMainWindow)
    {
        CommMainWindow->setWindowTitle(QApplication::translate("CommMainWindow", "CommMainWindow", Q_NULLPTR));
        pushButton_Init->setText(QApplication::translate("CommMainWindow", "Init", Q_NULLPTR));
        pushButton_2_Stop->setText(QApplication::translate("CommMainWindow", "Stop", Q_NULLPTR));
        label->setText(QApplication::translate("CommMainWindow", "Port", Q_NULLPTR));
        label_2->setText(QApplication::translate("CommMainWindow", "Speed", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CommMainWindow: public Ui_CommMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMMMAINWINDOW_H

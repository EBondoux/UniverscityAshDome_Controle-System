#ifndef COMMMAINWINDOW_H
#define COMMMAINWINDOW_H


#include <QDialog>
#include <QtSerialPort/QSerialPort>
//#include <QSerialPort>
//#include <QtSerialPort>
#include <QString>
#include <QtSql/QSql>
#include <QtSql/QSqlDatabase>
#include <QDateTime>
//#include <QQuickWidget>
//#include <QWidget>
#include <QtQuickWidgets/QQuickWidget>
#include <QLayout>
#include <QGridLayout>


#include <QMainWindow>

namespace Ui {
class CommMainWindow;
}

class CommMainWindow : public QMainWindow

{
    void findFreePorts(); //détecter les ports series libres
    void readData();


    Q_OBJECT

public:
    explicit CommMainWindow(QWidget *parent = 0);
    ~CommMainWindow();

private slots:
    void on_pushButton_Init_clicked();

    void on_pushButton_2_Stop_clicked();

private:
    Ui::CommMainWindow *ui;


    QSerialPort *arduino;
    static const quint16 arduino_uno_vendor_id = 1843;
    static const quint16 arduino_uno_product_id = 0200;
    QString arduino_port_name;
    bool arduino_is_available;
    std::string toto;
    QQuickWidget* view;
};

#endif // COMMMAINWINDOW_H

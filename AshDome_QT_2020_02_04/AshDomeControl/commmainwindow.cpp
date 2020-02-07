#include "commmainwindow.h"
#include "ui_commmainwindow.h"
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
//#include <QSerialPortInfo>
//#include <QSerialPort>
#include <QDebug>
#include <QtQuickWidgets/QQuickWidget>
#include <QtWidgets>
#include <QVBoxLayout>
#include <QScrollArea>
#include <QLabel>
#include <QString>
#include <QLCDNumber>
//#include <QSqlQuery>
#include <QtSql/QtSql>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtDebug>
//#include <QQuickWidget>
#include <QQuickItem>
#include <QQuickView>
#include <QVariant>

CommMainWindow::CommMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CommMainWindow)
{
    ui->setupUi(this);


    //ui ->view->setSource(QUrl::fromLocalFile(":/test.qml"));
    //ui -> view->show();


    arduino_is_available = false;
    arduino_port_name = "";

    arduino = new QSerialPort;
    CommMainWindow::findFreePorts();


    //__________________________________________________________________________________________________________________________________
    //affichage des datas

    connect(arduino, &QSerialPort::readyRead, this, &CommMainWindow::readData);
    //_____________________________________________________________________________________________________________________________________








}

CommMainWindow::~CommMainWindow()
{
    delete ui;
}
//
//
//**********************************************************************************************************
//action de click sur le bouton Init Serial
void CommMainWindow::on_pushButton_Init_clicked()
{


    foreach(const QSerialPortInfo &serialPortInfo, QSerialPortInfo::availablePorts()){
        if(serialPortInfo.hasVendorIdentifier() && serialPortInfo.hasProductIdentifier()){

            arduino_port_name = serialPortInfo.portName();
            //QMessageBox::warning(this, "Port error", "station OKok");
            arduino_is_available = true;
            //QMessageBox::warning(this, "Port error", "station OK");


        }
    }
    if(arduino_is_available){
        // open and configure the serialport

        //récupération du texte de la combobox du choix de port serie (Qstring)
        QString nameport = ui -> comboBox_Port ->currentText();

        //passage du parametre nom du port serie dans l'init de la connexion serie
        arduino->setPortName(nameport);
        //Confif des autres parametres du port
        //arduino->open(QSerialPort::WriteOnly);
        arduino->open(QSerialPort::ReadWrite);

        //passage du parametre vitesse du port serie dans l'init de la connexion serie depuis la combobox (attention convertir la Qstring en Qint sinon marche pas (ToInt)
        //arduino->setBaudRate(QSerialPort::Baud9600);
        arduino->setBaudRate(ui->comboBox_2_Speed->currentText().toInt());

        arduino->setDataBits(QSerialPort::Data8);
        arduino->setParity(QSerialPort::NoParity);
        arduino->setStopBits(QSerialPort::OneStop);
        arduino->setFlowControl(QSerialPort::NoFlowControl);

        //changement de la couleur du pushbuton d'init
        ui -> pushButton_Init->setStyleSheet("* { background-color: rgb(0,255,100) }");

        //const QByteArray data = arduino->readAll();
        // ui->serial_textBrowser->insertPlainText(data);
        // qDebug() << (data);

        const QByteArray data = arduino->readAll();
        //m_console->putData(data);
        ui->serial_plainTextEdit->insertPlainText(data);
        qDebug() << (data);




    }else{
        // give error message if not available
        QMessageBox::warning(this, "Port error", "Couldn't find the Arduino!");
        //changement de la couleur du pushbuton d'init
        ui -> pushButton_Init->setStyleSheet("* { background-color: rgb(200,200,200) }");

    }


}

//---------------------------------------------------------------------------

//bouton de stop du connexion serie
void CommMainWindow::on_pushButton_2_Stop_clicked()
{
    if (arduino->isOpen())
        arduino->close();
    //m_console->setEnabled(false);
    // m_ui->actionConnect->setEnabled(true);
    // m_ui->actionDisconnect->setEnabled(false);
    // m_ui->actionConfigure->setEnabled(true);
    // showStatusMessage(tr("Disconnected"));

    //changement de la couleur du pushbuton init
    ui -> pushButton_Init->setStyleSheet("* { background-color: rgb(200,200,200) }");
}

//----------------------------------------------------------------------------

void CommMainWindow::findFreePorts() //détécterles ports series libres et mettre a jour la combobox
{

    foreach (const QSerialPortInfo &serialPortInfo, QSerialPortInfo::availablePorts())
    {
        ui->comboBox_Port->addItem(serialPortInfo.portName());
    }
}

//--------------------------------------------------------------------------



//lecture des données serie depuis l'arduino
void CommMainWindow::readData()


{
    //constante de test sans capteur connecté au port serie
    qDebug() << "testsimu";
    //const QString data = "0R4,Tr=0.0#,Ra=0.0M,Sl=0.000000#,Rt=0.0#,Sr=0.000000#\n0R5,Th=0.0#,Vh=0.0#,Vs=0.0#,Vr=0.000#\n0R3,Rc=0.00M,Rd=0s,Ri=0.0M,Hc=0.0M,Hd=0s,Hi=0.0M\n0R2,Ta=28.3C,Ua=62.5P,Pa=970.9H\n"; //test avec readline (lire jusqu'au \n)

    const QString data = arduino->readLine(); //test avec readline (lire jusqu'au \n)


    const QString datatrim = (data).trimmed();// .trimmed : suppression du /n dans le Qsting
    QStringList tab = datatrim.split(",");//tab = ["BONJOUR", TOUT", "LE" ,"MONDE" ]


    }





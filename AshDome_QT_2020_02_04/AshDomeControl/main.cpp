#include "commmainwindow.h"
#include <QApplication>
#include <QGuiApplication>

int main(int argc, char *argv[])
{

     QApplication::setAttribute(Qt::AA_EnableHighDpiScaling);


    QApplication a(argc, argv);
    CommMainWindow w;
    w.show();

    return a.exec();
}

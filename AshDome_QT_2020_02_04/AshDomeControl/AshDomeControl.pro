#-------------------------------------------------
#
# Project created by QtCreator 2020-02-04T11:40:50
#
#-------------------------------------------------


QT       += core gui serialport sql quickwidgets

INCLUDEPATH += "C:\Qt\Qt5.9.1\5.9.1\mingw53_32\plugins\sqldrivers"

#LIBS += "C:\Qt\Qt5.9.1\5.9.1\mingw53_32\plugins\sqldrivers\qsqlmysql.dll"
LIBS += "C:\Qt\Qt5.9.1\5.9.1\mingw53_32\plugins\sqldrivers\libmysql.dll"
//LIBS+="C:\mysql-5.7.18-winx64\lib\libmysql.lib"

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = AshDomeControl
TEMPLATE = app








greaterThan(QT_MAJOR_VERSION, 4): QT += widgets








# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11


SOURCES += \
        main.cpp \
        commmainwindow.cpp

HEADERS += \
        commmainwindow.h

FORMS += \
        commmainwindow.ui \
    commmainwindow_copy.ui



# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target



DISTFILES += \
    testqml/testQML.qml \
    testqml/QmlLabel.qml

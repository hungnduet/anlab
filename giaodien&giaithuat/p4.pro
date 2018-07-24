QT += qml quick

CONFIG += c++11

SOURCES += main.cpp \
    bai2.cpp \
    bai3.cpp \
    bai4.cpp \
    bai5.cpp \
    bai6.cpp \
    bai7.cpp

RESOURCES += qml.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Default rules for deployment.
include(deployment.pri)

HEADERS += \
    bai2.h \
    bai3.h \
    bai4.h \
    bai5.h \
    bai6.h \
    bai7.h

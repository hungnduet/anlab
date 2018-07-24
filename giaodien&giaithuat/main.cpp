#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "bai3.h"
#include "bai2.h"
#include "bai4.h"
#include "bai5.h"
#include "bai6.h"
#include "bai7.h"

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    qmlRegisterType<Bai2>("Bai2", 1, 0, "Bai2");
    qmlRegisterType<Bai3>("Bai3", 1, 0, "Bai3");
    qmlRegisterType<Bai4>("Bai4", 1, 0, "Bai4");
    qmlRegisterType<Bai5>("Bai5", 1, 0, "Bai5");
    qmlRegisterType<Bai6>("Bai6", 1, 0, "Bai6");
    qmlRegisterType<Bai7>("Bai7", 1, 0, "Bai7");



    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}

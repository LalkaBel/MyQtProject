#include "widget.h"
#include <QGuiApplication>
#include <QQmlApplicationEngine>


int main(int argc, char *argv[])
{
     QGuiApplication app(argc, argv);
    qmlRegisterType<Widget>("com.myinc.Text33", 1, 0, "Calculation");

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/QmlCalc.qml")));

    return app.exec();
}

#include <QCoreApplication>
#include <QDebug>
#include <QFile>
#include <QDateTime>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qInfo() <<"This is info message";
    qDebug() <<"This is debug message";
    qWarning() <<"This is warning message";
    qCritical() <<"This is critical message";
    qFatal("This is fatal message");


    return a.exec();
}

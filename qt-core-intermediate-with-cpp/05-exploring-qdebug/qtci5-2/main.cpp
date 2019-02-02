#include <QCoreApplication>
#include "logger.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qInfo()<<"File:"<<Logger::fileName;
    Logger::attach();
    qInfo()<<"Testing";

    Logger::logging = false;

    qInfo()<<"Not log this";


    Logger::logging = true;
    qInfo()<<"Log again";



    qInfo("Finished:");

    return a.exec();
}

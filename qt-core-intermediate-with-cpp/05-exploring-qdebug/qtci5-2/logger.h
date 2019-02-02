#ifndef LOGGER_H
#define LOGGER_H

#include <QObject>
#include <QDebug>
#include <QFile>
#include <QDir>
#include <QDateTime>
#include <QTextStream>
#include <iostream>

class Logger : public QObject
{
    Q_OBJECT
public:
    explicit Logger(QObject *parent = nullptr);

    static bool logging;
    static QString fileName;
    static void attach();
    static void handler(QtMsgType type,const QMessageLogContext &context,const QString &msg);

signals:

public slots:
};

#endif // LOGGER_H

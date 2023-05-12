#include "mainwindow.h"

#include <QApplication>
#include <QAbstractNetworkCache>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QSqlDatabase>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QSqlDatabase();
    QByteArray data;

    MainWindow w;
    w.show();
    return a.exec();
}

#include <QCoreApplication>
#include <QDebug>
#include <iostream>
#include <QTextStream>
#include "radio.h"
#include "station.h"

using namespace std;


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    radio boonbox;
    station* channels[3];


    // create some stations
    channels[0] = new station(&boonbox, 94, "Rock and roll");
    channels[1] = new station(&boonbox, 101, "Hip Hop");
    channels[2] = new station(&boonbox, 89, "Info");

    boonbox.connect(&boonbox,&radio::quit,&a,&QCoreApplication::quit, Qt::QueuedConnection);

    do{
        qInfo()<<"Enter on, off, test or quit:";
        QTextStream qtin(stdin);
        QString line = qtin.readLine().trimmed().toUpper();

        if (line == "ON")
        {
         qInfo() << "turn radio On";
         for(int i = 0; i < 3; i++)
         {
             station* channel = channels[i];
             boonbox.connect(channel,&station::send,&boonbox,&radio::listen);
         }
         qInfo() << "radio is On";
        }
        if (line == "OFF")
        {
         qInfo() << "turn radio Off";
         for(int i = 0; i < 3; i++)
         {
             station* channel = channels[i];
             boonbox.disconnect(channel,&station::send,&boonbox,&radio::listen);
         }
         qInfo() << "radio is Off";
        }
       if (line == "TEST")
        {
         qInfo() << "Testing";
         for(int i = 0; i < 3; i++)
         {
             station* channel = channels[i];
             channel->broadcast("Broadcasting live :");
         }
        }
       if (line == "QUIT")
        {
         qInfo() << "Quitting";
         emit boonbox.quit();
         break;
        }
    }while(true);

    return a.exec();
}

#include <QCoreApplication>
#include <QDebug>
#include <iostream>
#include "source.h"
#include "destination.h"

using namespace std;


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    source objSource;
    destination objDestination;

    QObject::connect(&objSource,&source::mySignal,&objDestination,&destination::onMessage);

    objSource.test();

    return a.exec();
}

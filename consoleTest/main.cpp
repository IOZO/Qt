#include <QCoreApplication>
#include <QDebug>
#include <iostream>
#include "appliance.h"

using namespace std;


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    appliance kitchen5000;

    qInfo() << "Can cook ?" << kitchen5000.cook();
    qInfo() << "Can grill ?" << kitchen5000.freeze();
    qInfo() << "Can freeze ?" << kitchen5000.grill();

    return a.exec();
}

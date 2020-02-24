#include <QCoreApplication>
#include <QDebug>
#include <iostream>
#include "lion.h"

using namespace std;


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    lion aLion;
    aLion.speak();

    return a.exec();
}

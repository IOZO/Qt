#include <QCoreApplication>
#include <QDebug>
#include <iostream>
#include "laptop.h"

using namespace std;


void test(laptop &machine)
{
    machine.test();
}

void makeLapTops(QObject* parent){
    laptop mine(parent, "myNoteBook");
    laptop yours(parent, "myOtherNoteBook");

    mine.weight = 3;
    yours.weight = 6;

    test(mine);
    test(yours);
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    makeLapTops(&a);

    return a.exec();
}

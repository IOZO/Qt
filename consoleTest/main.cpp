#include <QCoreApplication>
#include <QDebug>
#include <iostream>
#include "feline.h"
#include "car.h"
#include "racecar.h"

using namespace std;


void testDrive(car* obj)
{
    obj->drive();
    obj->stop();
}

void race(racecar* obj)
{
    obj->gofast();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    racecar* player1 = new racecar(&a);

    car* player2 = qobject_cast<car *>(player1);
    player2->drive();

    racecar* player3 = qobject_cast<racecar *>(player2);
    player3->gofast();

    return a.exec();
}

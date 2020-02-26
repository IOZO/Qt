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
    testDrive(player1); // implicit convertion. Old fashinon, can work but bad !!!


    car *obj = dynamic_cast<car *>(player1);
    if(obj) testDrive(obj); // dynamycally converted object with accurate controls is the way to go.


    car* mycar = new car(&a);
    racecar *fastcar = static_cast<racecar*>(mycar);
    if(fastcar) race(fastcar); // upcasting the right way


    int *pointer = reinterpret_cast<int*>(player1);
    *pointer = 100;
    qInfo() << "pointer = " << pointer << "value :"<<*pointer;

    racecar* mysportcar = reinterpret_cast<racecar*>(pointer);
    qInfo() << "my car color is " << mysportcar->color;

    return a.exec();
}

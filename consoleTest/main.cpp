#include <QCoreApplication>
#include <QDebug>
#include <iostream>
#include "animal.h"

using namespace std;


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    animal dog;
    animal cat;
    animal bird;

    cat.speak("Meow");
    dog.speak("warf!!");
    bird.speak("tchip tchip");

     return a.exec();
}

#include <QCoreApplication>
#include <QDebug>
#include <iostream>

using namespace std;


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int age = 0;

    qInfo() << "Enter your age:";
    cin >> age;

    if(age==0) qFatal("you did not enter a valid age !!!");

    qInfo() << "You entered" << age;

    if(age < 18){
        qInfo()<<"You are under age!";
        qInfo()<<"Please come back when you are old enough!";
    }

    if(age < 21 && age >= 18)
        qInfo()<<"You are not really an adult yet!";

    if(age >= 21) qInfo() << "You are adult !";

    if(age > 150) qCritical() << "really ? are you human ? if yes, where did you find the fountain of jouvence !";

    return a.exec();
}

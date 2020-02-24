#include <QCoreApplication>
#include <QDebug>
#include <iostream>

using namespace std;


void test(int age=0){
    qInfo() << "age is"<<age;
}

void test(bool isActive=false){
    (isActive)?qInfo()<<"Active":qInfo()<<"Not Active";
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int age = 12;

    test(age);
    test(true);
    return a.exec();
}

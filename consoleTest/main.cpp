#include <QCoreApplication>
#include <QDebug>
#include <iostream>

using namespace std;

// Pass by value (copy)
void testVal(int i=0){
    i+=30;
    qInfo() << "I = "<<i;
}


// Pass by Ref (copy)
void testRef(int &i){
    i+=30;
    qInfo() << "I = "<<i;
}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int i0 = 50;

    testVal(i0);
    qInfo() << "I0 = "<< i0;

    testRef(i0);
    qInfo() << "I0 = "<< i0;
    return a.exec();
}

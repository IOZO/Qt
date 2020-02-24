#include <QCoreApplication>
#include <QDebug>
#include <iostream>

using namespace std;

struct laptop{
    int weight;

    double asKilograms(){
        return weight * 0.453592;
    }
};


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    laptop noteBook;
    noteBook.weight = 5;


    qInfo() << "Pounds = "<<  noteBook.weight;
    qInfo() << "Kilograms = "<<  noteBook.asKilograms();
    return a.exec();
}

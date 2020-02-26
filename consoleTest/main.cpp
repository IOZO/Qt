#include <QCoreApplication>
#include <QDebug>
#include <iostream>
#include "watcher.h"
#include "test.h"

using namespace std;


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    test tester;
    watcher destination;

    QObject::connect(&tester, &test::messageChanged, &destination, &watcher::messageChanged);

    tester.setProperty("message","hello World");
    // tester.setMessage("testing");

    return a.exec();
}

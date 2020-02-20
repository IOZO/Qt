#include <QCoreApplication>
#include <QDebug>

/**
 * @brief main
 * @param argc
 * @param argv
 * @return
 */

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // Variables
    bool isOn = true;
    qInfo() << "is it on" << isOn;

    int age = 53;
    double height = 1.84;

    qInfo() << "Age"<<age;
    qInfo() << "Height"<<height;

    signed int dogs=-1;
    dogs = 15;


    const unsigned int cats = 4;

    qInfo() << "Dogs" << dogs;
    qInfo() << "Cats" << cats;

    enum Color{red=100,green=43,blue=5678};

    Color myColor = Color::blue;

    qInfo() << "My color"<<myColor;


    return a.exec();
}

#include <QCoreApplication>
#include <QDebug>
#include <array>

using namespace std;

enum Colors {black,blue,red,green};

struct product{
    int weight;
    double value;
    Colors color;
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    product laptop;
    qInfo()<< "Size of product"<<sizeof(laptop);

    laptop.color = Colors::black;
    laptop.value = 849.99;
    laptop.weight = 1;

    qInfo() << "Weight :"<<laptop.weight;
    qInfo() << "Value :"<<laptop.value;
    qInfo() << "Color :"<<laptop.color;

    int ages[4] = {2,4,5,6};

    qInfo() << *ages;
    qInfo() << ages[0];
    qInfo() << ages[1];
    qInfo() << ages[2];
    qInfo() << ages[3];

    array<int,4> cars;
    cars[0] = 2;
    cars[1] = 128;
    cars[2] = 4;
    cars[3] = 25;
    cars[4] = 69;
    cars[5] = 007;


    qInfo() << "size cars " << cars.size();
    qInfo() << "sizeof cars " << sizeof(cars);
    qInfo() << "Last element" << cars[cars.size() - 1];
    return a.exec();
}

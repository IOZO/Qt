#include "laptop.h"

laptop::laptop(QObject *parent,QString myName) : QObject(parent)
{
    qDebug() << "laptop created";
    this->name = myName;
    this->weight = 0;
}

laptop::~laptop()
{
    qDebug() << "laptop destroyed";
}

double laptop::asKilograms()
{
    return this->weight * 0.453592;
}

void laptop::test()
{
    qInfo() << this << name << asKilograms();
}

#include "lion.h"

lion::lion(QObject *parent) : feline(parent)
{

}

void lion::speak()
{
    qInfo()<<"Roaaar !!";
    feline::speak();
}

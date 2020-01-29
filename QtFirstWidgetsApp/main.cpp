#include <QApplication>
#include "fenetre.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    Fenetre fenetre;
    fenetre.show();

    return a.exec();
}

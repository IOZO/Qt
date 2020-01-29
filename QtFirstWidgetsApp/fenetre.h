#ifndef FENETRE_H
#define FENETRE_H

#include <QApplication>
#include <QWidget>
#include <QPushButton>

class Fenetre : public QWidget
{
public:
    Fenetre();

private:
    QPushButton *m_bouton;
};

#endif // FENETRE_H

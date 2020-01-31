#ifndef FENETRE_H
#define FENETRE_H

#include <QApplication>
#include <QWidget>
#include <QSlider>

class Fenetre : public QWidget
{
    Q_OBJECT


public:
    Fenetre();

public slots:
    void changerLargeur(int largeur);

private:
    QSlider *m_slider;
};

#endif // FENETRE_H

#ifndef FENETRE_H
#define FENETRE_H

#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QSlider>
#include <QLCDNumber>

class Fenetre : public QWidget
{
public:
    Fenetre();

private:
    QLCDNumber *m_lcd;
    QSlider *m_slider;
};

#endif // FENETRE_H

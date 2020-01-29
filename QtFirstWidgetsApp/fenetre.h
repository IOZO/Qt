#ifndef FENETRE_H
#define FENETRE_H

#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QSlider>
#include <QProgressBar>

class Fenetre : public QWidget
{
public:
    Fenetre();

private:
    QSlider *m_slider;
    QProgressBar *m_progressBar;
};

#endif // FENETRE_H

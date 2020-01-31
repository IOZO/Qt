#include "fenetre.h"

Fenetre::Fenetre()
{
    setFixedSize(500,500*9/16);

   m_slider = new QSlider(Qt::Horizontal,this);
   m_slider->setRange(300,900);
   m_slider->setGeometry(50,80,150,20);
   m_slider->setValue(900-300*)

   connect(m_slider, SIGNAL(valueChanged(int)), this, SLOT(changerLargeur(int)));
}


void Fenetre::changerLargeur(int largeur)
{
    setFixedSize(largeur,largeur*9/16);
}

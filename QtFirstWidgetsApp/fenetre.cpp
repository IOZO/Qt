#include "fenetre.h"

Fenetre::Fenetre()
{
    setFixedSize(500,300);

   m_progressBar = new QProgressBar(this);
   m_progressBar->setGeometry(50,10,100,50);

   m_slider = new QSlider(Qt::Horizontal,this);
   m_slider->setGeometry(50,80,150,20);

   connect(m_slider, SIGNAL(valueChanged(int)), m_progressBar, SLOT(setValue(int)));
}

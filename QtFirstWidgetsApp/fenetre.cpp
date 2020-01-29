#include "fenetre.h"

Fenetre::Fenetre()
{
    setFixedSize(500,300);

   m_lcd = new QLCDNumber(this);
   m_lcd->setSegmentStyle(QLCDNumber::Flat);
   m_lcd->move(100,20);

   m_slider = new QSlider(Qt::Horizontal,this);
   m_slider->setGeometry(50,80,150,20);

   connect(m_slider, SIGNAL(valueChanged(int)), m_lcd, SLOT(display(int)));
}

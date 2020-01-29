#include "fenetre.h"

Fenetre::Fenetre()
{
    setFixedSize(500,300);

    m_bouton = new QPushButton("Salut les zéros, la forme ?",this);
    m_bouton->setText("Pimp my button");

    m_bouton->setToolTip("Aide sur ce super bouton");
    m_bouton->setFont(QFont("Comic Sans MS", 20, QFont::Bold, true));
    m_bouton->setGeometry(100,100,300,100);
    m_bouton->setIcon(QIcon("tq.png"));

    QObject::connect(m_bouton, SIGNAL(clicked()), qApp, SLOT(quit()));
}
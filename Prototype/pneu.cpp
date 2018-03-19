#include "pneu.h"

Pneu::Pneu(QString name)
{
    this->m_name = name;
}

IPrototype* Pneu::clone()
{
    Pneu* prototype = new Pneu(m_name);
    return prototype;
}

QString Pneu::toString() const
{
    return "Name: " + m_name;
}

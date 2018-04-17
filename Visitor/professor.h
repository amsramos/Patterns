#ifndef PROFESSOR_H
#define PROFESSOR_H

#include "ielement.h"

class IVisitor;

class Professor : public IElement
{
public:
    Professor(double altura);
    void accept(IVisitor *visitor) override;
    double getAltura();

private:
    double m_altura;
};

#endif // PROFESSOR_H

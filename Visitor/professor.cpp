#include "professor.h"

#include "ivisitor.h"
#include "ielement.h"

Professor::Professor(double altura) :
    m_altura(altura)
{

}

void Professor::accept(IVisitor *visitor)
{
    visitor->visitProfessor(this);
}

double Professor::getAltura()
{
    return m_altura;
}

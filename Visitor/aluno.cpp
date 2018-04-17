#include "aluno.h"

#include "ivisitor.h"

Aluno::Aluno(double score, double altura) :
    m_score(score),
    m_altura(altura)
{

}

void Aluno::accept(IVisitor *visitor)
{
    visitor->visitAluno(this);
}

double Aluno::getScore()
{
    return m_score;
}

double Aluno::getAltura()
{
    return m_altura;
}

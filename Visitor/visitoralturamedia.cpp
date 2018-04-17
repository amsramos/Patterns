#include "visitoralturamedia.h"

#include "aluno.h"
#include "professor.h"

VisitorAlturaMedia::VisitorAlturaMedia()
{
    clear();
}

void VisitorAlturaMedia::visitAluno(Aluno *aluno)
{
    m_numPessoas++;
    m_totalAltura = aluno->getAltura();
}

void VisitorAlturaMedia::visitProfessor(Professor *professor)
{
    m_numPessoas++;
    m_totalAltura += professor->getAltura();
}

double VisitorAlturaMedia::getAlturaMedia() const
{
    return m_totalAltura / m_numPessoas;
}

void VisitorAlturaMedia::clear()
{
    m_totalAltura = 0;
    m_numPessoas = 0;
}


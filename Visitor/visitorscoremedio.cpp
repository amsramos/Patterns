#include "visitorscoremedio.h"

VisitorScoreMedio::VisitorScoreMedio()
{
    clear();
}

void VisitorScoreMedio::visitAluno(Aluno *aluno)
{
    m_numPessoas++;
    m_totalScore += aluno->getScore();
}

void VisitorScoreMedio::visitProfessor(Professor *professor)
{
}

double VisitorScoreMedio::getScoreMedio() const
{
    return m_totalScore / m_numPessoas;
}

void VisitorScoreMedio::clear()
{
    m_totalScore = 0;
    m_numPessoas = 0;
}


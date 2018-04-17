#ifndef VISITORSCOREMEDIO_H
#define VISITORSCOREMEDIO_H

#include "ivisitor.h"
#include "aluno.h"
#include "professor.h"

class VisitorScoreMedio : public IVisitor
{
public:
    VisitorScoreMedio();
    void visitAluno(Aluno *Aluno);
    void visitProfessor(Professor *professor);
    void clear();
    double getScoreMedio() const;

private:
    double m_totalScore;
    int m_numPessoas;
};

#endif // VISITORSCOREMEDIO_H

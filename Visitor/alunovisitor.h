#ifndef ALUNOVISITOR_H
#define ALUNOVISITOR_H

#include "ivisitor.h"
#include "ielement.h"

class AlunoVisitor : public IVisitor
{
public:
    AlunoVisitor();
    void visitAluno(IElement *aluno);
    void visitProfessor(IElement *professor);
};

#endif // ALUNOVISITOR_H

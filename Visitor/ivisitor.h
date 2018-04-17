#ifndef IVISITOR_H
#define IVISITOR_H

class Aluno;
class Professor;

class IVisitor
{
public:
    virtual void visitAluno(Aluno *aluno) = 0;
    virtual void visitProfessor(Professor *professor) = 0;
};

#endif // IVISITOR_H

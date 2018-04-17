#ifndef VISITORALTURAMEDIA_H
#define VISITORALTURAMEDIA_H

#include "ivisitor.h"

class Aluno;
class Professor;

class VisitorAlturaMedia : public IVisitor
{
public:
    VisitorAlturaMedia();
    double getAlturaMedia() const;
    void visitProfessor(Professor *professor);
    void visitAluno(Aluno *aluno);
    void clear();

private:
    int m_numPessoas;
    double m_totalAltura;
};

#endif // VISITORALTURAMEDIA_H

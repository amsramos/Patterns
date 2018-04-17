#ifndef ALUNO_H
#define ALUNO_H

#include "ielement.h"

class IVisitor;

class Aluno : public IElement
{
public:
    Aluno(double score, double altura);
    void accept(IVisitor *visitor) override;
    double getScore();
    double getAltura();

private:
    double m_score;
    double m_altura;
};

#endif // ALUNO_H

#ifndef PNEU_H
#define PNEU_H

#include "iprototype.h"

#include <QString>

class Pneu : public IPrototype
{
public:
    Pneu(QString name);
    IPrototype* clone() override;
    QString toString() const;

private:
    QString m_name;
};

#endif // PNEU_H

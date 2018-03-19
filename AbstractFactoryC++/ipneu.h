#ifndef IPNEU_H
#define IPNEU_H

#include <QString>

class IPneu
{
public:
    virtual ~IPneu();
    virtual QString toString() = 0;
};

#endif // IPNEU_H

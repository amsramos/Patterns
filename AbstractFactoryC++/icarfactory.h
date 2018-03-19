#ifndef ICARFACTORY_H
#define ICARFACTORY_H

#include "ipneu.h"
#include "imotor.h"

class ICarFactory
{
public:
    virtual ~ICarFactory();
    virtual IPneu* createPneu() = 0;
    virtual IMotor* createMotor() = 0;
};

#endif // ICARFACTORY_H

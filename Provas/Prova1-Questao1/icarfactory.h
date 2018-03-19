#ifndef ICARFACTORY_H
#define ICARFACTORY_H

#include "ipneu.h"
#include "imotor.h"
#include "ichassi.h"

class ICarFactory
{
public:
    ~ICarFactory();
    virtual IPneu* createPneu() = 0;
    virtual IMotor* createMotor() = 0;
    virtual IChassi* createChassi() = 0;
};

#endif // ICARFACTORY_H

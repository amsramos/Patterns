#ifndef RALLYCARFACTORY_H
#define RALLYCARFACTORY_H

#include "icarfactory.h"

class RallyCarFactory : public ICarFactory
{
public:
    RallyCarFactory();
    IPneu* createPneu() override;
    IMotor* createMotor() override;
};

#endif // RALLYCARFACTORY_H

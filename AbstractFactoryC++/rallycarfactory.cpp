#include "rallycarfactory.h"
#include "pneurally.h"
#include "motorrally.h"

RallyCarFactory::RallyCarFactory()
{

}

IPneu* RallyCarFactory::createPneu()
{
    return new PneuRally;
}

IMotor* RallyCarFactory::createMotor()
{
    return new MotorRally;
}

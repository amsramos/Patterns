#ifndef MOTORRALLY_H
#define MOTORRALLY_H

#include <QString>

#include "imotor.h"

class MotorRally : public IMotor
{
public:
    MotorRally();
    QString toString() override;
};

#endif // MOTORRALLY_H

#ifndef IMOTOR_H
#define IMOTOR_H

#include <QString>

class IMotor
{
public:
    virtual ~IMotor();
    virtual QString toString() = 0;
};

#endif // IMOTOR_H

#ifndef ADAPTER_H
#define ADAPTER_H

#include "itarget.h"
#include "adaptee.h"

class Adapter : public ITarget
{
public:
    Adapter(Adaptee* adaptee);
    void request() override;

private:
    Adaptee* m_adaptee;
};

#endif // ADAPTER_H

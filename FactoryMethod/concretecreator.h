#ifndef CONCRETECREATOR_H
#define CONCRETECREATOR_H

#include "icreator.h"
#include "iproduct.h"

class ConcreteCreator : public ICreator
{
public:
    ConcreteCreator();
    typedef ICreator super;
    IProduct* createProduct() override;
};

#endif // CONCRETECREATOR_H

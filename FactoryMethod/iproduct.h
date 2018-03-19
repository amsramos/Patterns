#ifndef IPRODUCT_H
#define IPRODUCT_H

#include <QString>

class IProduct
{
public:
    virtual ~IProduct();
    virtual QString toString() = 0;
};

#endif // IPRODUCT_H

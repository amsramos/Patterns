#ifndef PRODUCT_H
#define PRODUCT_H

#include "iproduct.h"

class Product : public IProduct
{
public:
    Product();
    QString toString() override;
};

#endif // PRODUCT_H

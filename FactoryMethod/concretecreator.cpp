#include "concretecreator.h"
#include "product.h"

ConcreteCreator::ConcreteCreator() :
    super(new Product)
{

}

IProduct* ConcreteCreator::createProduct()
{
    return new Product;
}

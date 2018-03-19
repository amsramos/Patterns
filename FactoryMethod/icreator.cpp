#include "icreator.h"
#include "iproduct.h"

ICreator::ICreator(IProduct *product) :
    m_product(product)
{

}

ICreator::~ICreator()
{
    delete(m_product);
}

void ICreator::newProduct()
{
    m_product = createProduct();
}

IProduct* ICreator::getProduct()
{
    return m_product;
}

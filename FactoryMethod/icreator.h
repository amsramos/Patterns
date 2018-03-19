#ifndef ICREATOR_H
#define ICREATOR_H

class IProduct;

class ICreator
{
protected:
    ICreator(IProduct *product);
    ~ICreator();
    IProduct* m_product;

public:
    virtual IProduct* createProduct() = 0;
    void newProduct();
    IProduct* getProduct();
};

#endif // ICREATOR_H

#ifndef IPROTOTYPE_H
#define IPROTOTYPE_H


class IPrototype
{
public:
    ~IPrototype();
    virtual IPrototype* clone() = 0;
};

#endif // IPROTOTYPE_H

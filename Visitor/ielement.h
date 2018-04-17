#ifndef IELEMENT_H
#define IELEMENT_H

class IVisitor;

class IElement
{
public:
    virtual void accept(IVisitor *visitor) = 0;
};

#endif // IELEMENT_H

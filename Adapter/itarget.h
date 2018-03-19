#ifndef ITARGET_H
#define ITARGET_H


class ITarget
{
public:
    ~ITarget();
    virtual void request() = 0;
};

#endif // ITARGET_H

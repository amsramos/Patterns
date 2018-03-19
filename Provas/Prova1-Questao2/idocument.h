#ifndef IDOCUMENT_H
#define IDOCUMENT_H


class IDocument
{
public:
    ~IDocument();
    virtual void doSomething() = 0;
};

#endif // IDOCUMENT_H

#ifndef MYDOCUMENT_H
#define MYDOCUMENT_H

#include "idocument.h"

class MyDocument : public IDocument
{
public:
    MyDocument();
    void doSomething() override;
};

#endif // MYDOCUMENT_H

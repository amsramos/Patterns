#ifndef MYFRAMEWORK_H
#define MYFRAMEWORK_H

#include "idocumentcreator.h"

class MyFramework
{
public:
    ~MyFramework();
    virtual void fileOpen() = 0;
    virtual void setCreator(IDocumentCreator* creator) = 0;
};

#endif // MYFRAMEWORK_H

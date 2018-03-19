#ifndef MYDOCUMENT_H
#define MYDOCUMENT_H

#include "idocumentcreator.h"
#include "idocument.h"

class MyDocCreator : public IDocumentCreator
{
public:
    MyDocCreator();
    ~MyDocCreator();
    typedef IDocumentCreator super;
    IDocument* createDocument() override;
};

#endif // MYDOCUMENT_H

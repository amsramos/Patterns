#ifndef IDOCUMENTCREATOR_H
#define IDOCUMENTCREATOR_H

#include "idocument.h"

class IDocumentCreator
{
protected:
    IDocumentCreator(IDocument* document);

public:
    IDocument* m_document;
    virtual IDocument* createDocument() = 0;
    void newDocument();
    IDocument* openDocument();
};

#endif // IDOCUMENTCREATOR_H

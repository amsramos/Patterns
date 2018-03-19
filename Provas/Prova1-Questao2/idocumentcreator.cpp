#include "idocumentcreator.h"

IDocumentCreator::IDocumentCreator(IDocument* document) :
    m_document(document)
{

}

void IDocumentCreator::newDocument()
{
    m_document = createDocument();
}

IDocument* IDocumentCreator::openDocument()
{
    return m_document;
}

#include "mydoccreator.h"
#include "mydocument.h"

MyDocCreator::MyDocCreator() :
    super(new MyDocument)
{

}

MyDocCreator::~MyDocCreator()
{
    delete(m_document);
}

IDocument* MyDocCreator::createDocument()
{
    return new MyDocument;
}

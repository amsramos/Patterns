#include "editorframework.h"
#include "idocument.h"

EditorFramework::EditorFramework()
{

}

void EditorFramework::setCreator(IDocumentCreator *creator)
{
    m_creator = creator;
}

void EditorFramework::fileOpen()
{
    IDocument* document = m_creator->createDocument();
    document->doSomething();
}

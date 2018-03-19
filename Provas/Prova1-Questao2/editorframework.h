#ifndef EDITORFRAMEWORK_H
#define EDITORFRAMEWORK_H

#include "myframework.h"

class EditorFramework : public MyFramework
{
public:
    EditorFramework();
    void fileOpen() override;
    void setCreator(IDocumentCreator* creator) override;

public:
    IDocumentCreator* m_creator;
};

#endif // EDITORFRAMEWORK_H

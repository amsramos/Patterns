#include <QCoreApplication>

#include "myframework.h"
#include "editorframework.h"
#include "mydoccreator.h"

int main()
{
    MyFramework* f = new EditorFramework();
    f->setCreator(new MyDocCreator());
    f->fileOpen(); // Deve criar o documento e invocar algum método
}

#include <QCoreApplication>
#include <iostream>

#include "prototypemanager.h"
#include "pneu.h"

int main()
{
    Pneu* pneu = new Pneu("rally");
    PrototypeManager* prototypeMag = new PrototypeManager;
    prototypeMag->registerPrototype(pneu, "rally");
    Pneu* clone1 = (Pneu*) prototypeMag->create("rally");
    Pneu* clone2 = (Pneu*) prototypeMag->create("rally");
    std::cout << clone1->toString().toStdString() << std::endl;
    std::cout << clone2->toString().toStdString() << std::endl;
}

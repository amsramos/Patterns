#include <QCoreApplication>

#include "itarget.h"
#include "adapter.h"
#include "adaptee.h"

int main(int argc, char *argv[])
{
    Adaptee* adp = new Adaptee;
    ITarget* target = new Adapter(adp);
    target->request();
}

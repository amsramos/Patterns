#include "adapter.h"

#include <iostream>

Adapter::Adapter(Adaptee* adaptee) :
    m_adaptee(adaptee)
{

}

void Adapter::request()
{
    std::cout << "Adaptei para ";
    m_adaptee->specificRequest();
}

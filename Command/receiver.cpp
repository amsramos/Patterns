#include "receiver.h"

Receiver::Receiver(double value) :
    m_number(value)
{

}

void Receiver::sum(double value)
{
    m_number += value;
}

void Receiver::multiply(double value)
{
    m_number *= value;
}

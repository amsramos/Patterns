#include "multiplycommand.h"

MultiplyCommand::MultiplyCommand(Receiver *receiver, double value) :
    m_value(value),
    m_receiver(receiver)
{

}

void MultiplyCommand::undo()
{
    m_receiver->multiply(1/m_value);
}

void MultiplyCommand::redo()
{
    m_receiver->multiply(m_value);
}

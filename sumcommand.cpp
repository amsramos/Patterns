#include "sumcommand.h"
#include "receiver.h"

SumCommand::SumCommand(Receiver *receiver, double  value) :
    m_receiver(receiver),
    m_value(value)
{

}

void SumCommand::redo()
{
    m_receiver->sum(m_value);
}

void SumCommand::undo()
{
    m_receiver->sum(-m_value);
}

#ifndef SUMCOMMAND_H
#define SUMCOMMAND_H

#include "icommand.h"

class Receiver;

class SumCommand : public ICommand
{
public:
    SumCommand(Receiver *receiver, double value);
    void undo() override;
    void redo() override;

private:
    Receiver *m_receiver;
    double m_value;
};

#endif // SUMCOMMAND_H

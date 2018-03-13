#ifndef MULTIPLYCOMMAND_H
#define MULTIPLYCOMMAND_H

#include "icommand.h"
#include "receiver.h"

class MultiplyCommand : public ICommand
{
public:
    MultiplyCommand(Receiver *receiver, double value);
    void undo() override;
    void redo() override;

private:
    double m_value;
    Receiver *m_receiver;
};

#endif // MULTIPLYCOMMAND_H

#ifndef ICOMMAND_H
#define ICOMMAND_H


class ICommand
{
public:
    virtual void undo() = 0;
    virtual void redo() = 0;
};

#endif // ICOMMAND_H

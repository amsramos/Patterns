#ifndef COMMANDHISTORY_H
#define COMMANDHISTORY_H

#include <QList>

class ICommand;

class CommandHistory
{
public:
    CommandHistory();
    ~CommandHistory();
    void pushCommand(ICommand *command);
    bool undoCommand();
    bool redoCommand();
private:
    int m_top;
    QList<ICommand *> m_commands;
};

#endif // COMMANDHISTORY_H

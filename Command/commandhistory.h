#ifndef COMMANDHISTORY_H
#define COMMANDHISTORY_H


class CommandHistory
{
public:
    CommandHistory();
    void pushCommand(Icommand command);
    void popCommand();
private:
    int m_top;
    QList<Icommand *> commands;
};

#endif // COMMANDHISTORY_H

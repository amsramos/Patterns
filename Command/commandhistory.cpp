#include "commandhistory.h"
#include "icommand.h"

CommandHistory::CommandHistory()
{
    m_top = 0;
}

CommandHistory::~CommandHistory()
{
    qDeleteAll(m_commands);
}

void CommandHistory::pushCommand(ICommand *command)
{
    qDeleteAll(m_commands.begin() + m_top, m_commands.end());
    m_commands.erase(m_commands.begin() + m_top, m_commands.end());
    m_commands << command;
    m_top++;
}

bool CommandHistory::redoCommand()
{
    if(m_top < m_commands.size()){
        m_commands.at(m_top++)->redo();
        return true;
    }
    return false;
}

bool CommandHistory::undoCommand()
{
    if(m_top > 0){
        m_commands.at(--m_top)->undo();
        return true;
    }
    return false;
}

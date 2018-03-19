#include "prototypemanager.h"

#include <QList>
#include <QString>

PrototypeManager::PrototypeManager()
{

}

bool PrototypeManager::registerPrototype(IPrototype *prototype, QString name)
{
    if(!m_prototypes.contains(name)){
        m_prototypes[name] = prototype;
        return true;
    }
    return false;
}

bool PrototypeManager::unregisterPrototype(QString name)
{
    if(m_prototypes.contains(name)){
        m_prototypes.erase(m_prototypes.find(name));
        return true;
    }
    return false;
}

void PrototypeManager::clear()
{
    m_prototypes.clear();
}

/*QList<QString const> PrototypeManager::prototypeNames()
{
    QList<QString const> names;
    for(auto it = m_prototypes.begin(); it != m_prototypes.end(); ++it)
        names << it->first;
    return names;
}*/

IPrototype* PrototypeManager::create(QString name)
{
    if(m_prototypes.contains(name))
        m_prototypes[name]->clone();
    else
        return nullptr;
}

#ifndef PROTOTYPEMANAGER_H
#define PROTOTYPEMANAGER_H

#include <QString>
#include <QList>
#include <QMap>

#include "iprototype.h"

class PrototypeManager
{
public:
    PrototypeManager();
    bool registerPrototype(IPrototype*, QString);
    bool unregisterPrototype(QString);
    QList<QString const> prototypeNames();
    void clear();
    IPrototype* create(QString);

private:
    QMap<QString, IPrototype *> m_prototypes;
};

#endif // PROTOTYPEMANAGER_H

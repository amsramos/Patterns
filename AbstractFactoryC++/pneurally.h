#ifndef PNEURALLY_H
#define PNEURALLY_H

#include <QString>

#include "ipneu.h"

class PneuRally : public IPneu
{
public:
    PneuRally();
    QString toString() override;
};

#endif // PNEURALLY_H

#ifndef MYFACTORY_H
#define MYFACTORY_H

#include "icarfactory.h"
#include "ipneu.h"
#include "imotor.h"
#include "ichassi.h"
#include "mypneu.h"
#include "mymotor.h"
#include "mychassi.h"

#include <QList>

class MyFactory : public ICarFactory
{
private:
    MyFactory(int maxPneus, int maxChassis, int maxMotores);

private:
    int m_maxPneus;
    int m_maxChassis;
    int m_maxMotores;
    int m_contPneus;
    int m_contChassis;
    int m_contMotores;
    QList <MyPneu *> m_pneus;
    QList <MyChassi *> m_chassis;
    QList <MyMotor *> m_motores;

public:
    ~MyFactory();
    IPneu* createPneu() override;
    IMotor* createMotor() override;
    IChassi* createChassi() override;
    static MyFactory* getInstance(int maxPneus, int maxChassis, int maxMotores);
    int incrementar(int cont, int max);

public:
    static MyFactory* _instance;

};

#endif // MYFACTORY_H

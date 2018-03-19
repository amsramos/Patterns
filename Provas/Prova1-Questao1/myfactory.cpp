#include <iostream>

#include "myfactory.h"
#include "mypneu.h"
#include "mymotor.h"
#include "mychassi.h"

MyFactory* MyFactory::_instance = nullptr;

MyFactory::MyFactory(int pneus, int chassis, int motores) :
    m_maxPneus(pneus),
    m_maxChassis(chassis),
    m_maxMotores(motores),
    m_contPneus(0),
    m_contChassis(0),
    m_contMotores(0)
{

}

MyFactory::~MyFactory()
{
    qDeleteAll(m_pneus);
    qDeleteAll(m_motores);
    qDeleteAll(m_chassis);
}

MyFactory* MyFactory::getInstance(int maxPneus, int maxChassis, int maxMotores)
{
    if(!_instance){
        _instance = new MyFactory(maxPneus, maxChassis, maxMotores);
        return _instance;
    }else
        return _instance;
}

int MyFactory::incrementar(int cont, int max)
{
    return (cont == max) ? 0 : ++cont;
}

IPneu* MyFactory::createPneu()
{
    if(m_pneus.size() < m_maxPneus){
        MyPneu* pneu = new MyPneu;
        m_pneus.append(pneu);
        return pneu;
    }else{
        MyPneu* pneu = m_pneus.at(m_contPneus);
        m_contPneus = incrementar(m_contPneus, m_maxPneus);
        return pneu;
    }

}

IMotor* MyFactory::createMotor()
{
    if(m_motores.size() < m_maxMotores){
        MyMotor* motor = new MyMotor;
        m_motores.append(motor);
        std::cout << m_motores.size() - 1;
        return motor;
    }else{
        MyMotor* motor = m_motores.at(m_contMotores);
        std::cout << m_contMotores;
        m_contMotores = incrementar(m_contMotores, m_maxMotores);
        return motor;
    }
}

IChassi* MyFactory::createChassi()
{
    if(m_chassis.size() < m_maxChassis){
        MyChassi* chassi = new MyChassi;
        m_chassis.append(chassi);
        return chassi;
    }else{
        MyChassi* chassi = m_chassis.at(m_contChassis);
        m_contChassis = incrementar(m_contChassis, m_maxChassis);
        return chassi;
    }
}

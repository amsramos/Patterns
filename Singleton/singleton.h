#ifndef SINGLETON_H
#define SINGLETON_H

#include <QString>

class Singleton
{

private:
    Singleton();
    static Singleton* _instance;

public:
    static Singleton* getInstance();
    QString message();
};

#endif // SINGLETON_H

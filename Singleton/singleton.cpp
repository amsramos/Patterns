#include "singleton.h"

Singleton* Singleton::_instance = nullptr;

Singleton::Singleton()
{

}

QString Singleton::message()
{
    return "Eu sou uma instância";
}

Singleton* Singleton::getInstance()
{
    if(!_instance){
        return _instance;
    }else{
        _instance = new Singleton();
        return _instance;
    }
}

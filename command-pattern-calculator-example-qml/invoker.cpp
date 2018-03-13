#include "invoker.h"

class Invoker{

    private:
        vector <ICommand> *stackRedo;
        vector <ICommand> *stackUndo;

        void push(Icommand command){
            this->stackUndo.push_back(command);
        }

        ICommand pop(){
            return this->stackUndo.pop_back();
        }

    public:
        Invoker(){}

    }
}

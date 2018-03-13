#include "sumcommand.h"

class SumCommand : public ICommand{

    public:
        SumCommand(){}

        ~SumCommand(){}

        float execute(float n1, float n2){
            return this->resultValue = n1 + n2;
        }

    private:
        float resultValue;

}

#include "multiplycommand.h"
#include "icommand.h"

class MultiplyCommand : public ICommand{

    public:
        MultiplyCommand(){}

        ~MultiplyCommand(){}

        float execute(float n1, float n2){
            return this->resultValue = n1 * n2;
        }

    private:
        float resultValue;


}

#include <iostream>
using namespace std;

class AbstractStecher{
public:
    virtual void FlatPin()=0;
    virtual void PinCount()=0;
};
class Stecher : public AbstractStecher{
public:
    void FlatPin(){
        cout<<"Sunt un pin plat/drept []\n";
    }
    void PinCount(){
        cout<<"Am 3 pini *.*\n";
    }
};

class AbstractPriza{
public:
    virtual void RoundPin()=0;
    virtual void PinCount()=0;
};

class Priza : public AbstractPriza{
public:
    void RoundPin(){
        cout<<"Sunt un pin rotund () \n";
    }
    void PinCount(){
        cout<< "Am 2 pini **\n";
    }
};

class Adaptor : public AbstractStecher{
public:
    AbstractPriza *adaptor;
    Adaptor(AbstractPriza *a){
        this->adaptor = a;
    }
    void FlatPin() {
        adaptor->RoundPin();
    }
    void PinCount() {
        adaptor->PinCount();
    }
};

int main() {

    Priza *priza = new Priza;
    AbstractStecher *adaptor = new Adaptor(priza);
    adaptor->FlatPin();
    adaptor->PinCount();

    return 0;
}

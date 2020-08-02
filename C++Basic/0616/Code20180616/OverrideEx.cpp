#include "iostream"
using namespace std;

class Base {
public: 
    virtual void p(int i) {
        cout << "Base::p(int)" << endl;
    }
};

class Derived: public Base {
// This method overrides the method in Base
public:
    void p(int i) {
        cout << "Derived::p(int)" << endl;
    }    
};

int main(){    
    Base b;
    Derived d;
    Base* dp = new Derived();
    b.p(10);
    d.p(10);
    dp->p(10);
    return 0;
}
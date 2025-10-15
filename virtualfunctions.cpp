#include<iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class show() called" << endl;
    }
};

class Derived : public Base {
public:
    void show() {  
        cout << "Derived class show() called" << endl;
    }
};

int main() {
    Base* baseptr;
    Derived d;
    baseptr = &d;
    baseptr->show();  

    return 0;
}

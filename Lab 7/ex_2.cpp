//Write a program to show the order of invocation of constructor and destructor in inheritance.

#include<iostream>

using namespace std;

class Base {
    
public:
    Base() {
        cout << "Base class Constructor called\n";
    }

    ~Base() {
        cout << "Base class Destructor called\n";
    }
};

class Derived : public Base {
public:
    Derived() {
        cout << "Derived class Constructor called\n";
    }

    ~Derived() {
        cout << "Derived class Destructor called\n";
    }
};

int main() {
    Derived obj;
    return 0;
}

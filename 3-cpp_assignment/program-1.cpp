// 1. Find the sum of three numbers with the help of function overriding. Display sum of base class with the help of derived class object and vice versa.

#include <iostream>
using namespace std;

// Base class
class Base {
public:
    // Function to calculate sum of three numbers
    virtual int sum(int a, int b, int c) {
        return a + b + c;
    }
};

// Derived class inheriting from Base
class Derived : public Base {
public:
    // Function overriding: Different implementation in Derived class
    int sum(int a, int b, int c) override {
        return a + b + c + 10; // Adding 10 to differentiate from Base
    }
};

int main() {
    Base baseObj;
    Derived derivedObj;

    // Display sum using base class object
    cout << "Sum using Base class: " << baseObj.sum(5, 10, 15) << endl;

    // Display sum using derived class object
    cout << "Sum using Derived class: " << derivedObj.sum(5, 10, 15) << endl;

    return 0;
}

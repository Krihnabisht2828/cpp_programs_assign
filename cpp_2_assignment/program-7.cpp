// 7. Find the sum of three numbers with the help of function overriding. Display sum of base class with the help of derived class object and vice versa.
#include <iostream>
using namespace std;

class Base
{
public:
    // Virtual function to find the sum of three numbers
    virtual void sum(int a, int b, int c)
    {
        cout << "Sum from Base Class: " << (a + b + c) << endl;
    }
};

class Derived : public Base
{
public:
    // Overriding function to find the sum of three numbers
    void sum(int a, int b, int c) override
    {
        cout << "Sum from Derived Class: " << (a + b + c) << endl;
    }
};

int main()
{
    Base baseObj;
    Derived derivedObj;

    // Using a Base class pointer to point to a Derived class object
    Base *basePtr = &derivedObj;
    basePtr->sum(1, 2, 3); // Calls the overridden sum function from the Derived class

    // Calling the Base class sum method using a Base class object
    baseObj.sum(1, 2, 3); // Calls the sum function from the Base class

    // Calling the Derived class sum method using a Derived class object
    derivedObj.sum(4, 6, 9); // Calls the overridden sum function from the Derived class

    return 0;
}

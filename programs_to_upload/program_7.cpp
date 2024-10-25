/*7. Display the sum of two numbers using multiple inheritance where one number is declared in first base class and one number declared in second base class. Function is defined in the derived class to sum two numbers.*/
#include <iostream>
using namespace std;

// First base class
class FirstNumber {
    protected:
        int num1;
    
    public:
        void getFirst() {
            cout << "Enter first number: ";
            cin >> num1;
        }
};

// Second base class
class SecondNumber {
    protected:
        int num2;
    
    public:
        void getSecond() {
            cout << "Enter second number: ";
            cin >> num2;
        }
};

// Derived class inheriting from both base classes
class Sum : public FirstNumber, public SecondNumber {
    public:
        void calculateSum() {
            cout << "Sum of numbers is: " << num1 + num2 << endl;
        }
};

int main() {
    Sum obj;
    obj.getFirst();
    obj.getSecond();
    obj.calculateSum();
    return 0;
}
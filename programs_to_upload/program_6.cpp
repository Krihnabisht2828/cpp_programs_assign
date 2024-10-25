/*6. Display the sum of two numbers using multilevel inheritance where one number is declared in base class and one number declared in first derived class. Function is defined in the second derived class to suim two numbers.*/
#include <iostream>
using namespace std;

// Base class
class FirstNumber {
    protected:
        int num1;
    
    public:
        void getFirst() {
            cout << "Enter first number: ";
            cin >> num1;
        }
};

// First derived class
class SecondNumber : public FirstNumber {
    protected:
        int num2;
    
    public:
        void getSecond() {
            cout << "Enter second number: ";
            cin >> num2;
        }
};

// Second derived class
class Sum : public SecondNumber {
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
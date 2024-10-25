/*8. Using hierarchical inheritance where two numbers are declared in base class. Create one function in first derive class and one function in second derive class. First derive class displays the first number with the help of their function and the second derive class displays the second function with the help of their function.*/
#include <iostream>
using namespace std;

// Base class
class Numbers {
    protected:
        int num1, num2;
    
    public:
        Numbers() {
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
        }
};

// First derived class
class FirstDisplay : public Numbers {
    public:
        void showFirst() {
            cout << "First number is: " << num1 << endl;
        }
};

// Second derived class
class SecondDisplay : public Numbers {
    public:
        void showSecond() {
            cout << "Second number is: " << num2 << endl;
        }
};

int main() {
    FirstDisplay obj1;
    obj1.showFirst();
    
    SecondDisplay obj2;
    obj2.showSecond();
    return 0;
}
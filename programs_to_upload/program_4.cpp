/* 4. Display sum of two integer values, sum of two float values, two char values using
constructor overloading */
#include <iostream>
using namespace std;

class Calculator {
    public:
        // Constructor for integers
        Calculator(int a, int b) {
            cout << "Sum of integers: " << a + b << endl;
        }
        
        // Constructor for floats
        Calculator(float a, float b) {
            cout << "Sum of floats: " << a + b << endl;
        }
        
        // Constructor for characters
        Calculator(char a, char b) {
            cout << "Sum of ASCII values of characters: " << (int)a + (int)b << endl;
        }
};

int main() {
    Calculator obj1(5, 10);           // Calls integer constructor
    Calculator obj2(3.5f, 4.7f);      // Calls float constructor
    Calculator obj3('A', 'B');        // Calls character constructor
    return 0;
}
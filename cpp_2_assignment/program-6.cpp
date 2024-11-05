// 6. Find the sum of two numbers, three numbers and four numbers with the help of function overloading.
#include <iostream>
using namespace std;

class Calculator
{
public:
    // Function to find sum of two numbers
    int sum(int a, int b)
    {
        return a + b;
    }
    // Function to find sum of three numbers
    int sum(int a, int b, int c)
    {
        return a + b + c;
    }
    // Function to find sum of four numbers
    int sum(int a, int b, int c, int d)
    {
        return a + b + c + d;
    }
};

int main()
{
    Calculator calc;
    cout << "Sum of 2 numbers: " << calc.sum(1, 2) << endl;       // Using two numbers
    cout << "Sum of 3 numbers: " << calc.sum(1, 2, 3) << endl;    // Using three numbers
    cout << "Sum of 4 numbers: " << calc.sum(1, 2, 3, 4) << endl; // Using four numbers
    return 0;
}

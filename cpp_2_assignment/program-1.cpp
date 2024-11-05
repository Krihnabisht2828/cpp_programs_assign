// 1. Create an inline function in student class to display the sum of two numbers
#include <iostream>
using namespace std;

class Student
{
public:
    // Inline function to display the sum of two numbers
    inline void displaySum(int a, int b)
    {
        cout << "Sum: " << (a + b) << endl;
    }
};

int main()
{
    Student student;
    student.displaySum(5, 10); // Example usage of inline function
    return 0;
}

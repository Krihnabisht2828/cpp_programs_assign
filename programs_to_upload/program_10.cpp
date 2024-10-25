// 10. Create an inline function in student class to display the sum of two numbers
#include <iostream>
using namespace std;

class Student {
public:
    // Inline function to display the sum of two numbers
    inline void displaySum(int num1, int num2) {
        cout << "Sum of " << num1 << " and " << num2 << " is: " << (num1 + num2) << endl;
    }
};

int main() {
    Student student;
    student.displaySum(5, 7); // Example usage
    return 0;
}

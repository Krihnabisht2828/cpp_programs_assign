// 2. Swap two numbers using parameterized constructor
#include <iostream>
using namespace std;

class SwapNumbers {
    private:
        int num1, num2;
    
    public:
        // Parameterized constructor
        SwapNumbers(int a, int b) {
            num1 = a;
            num2 = b;
            cout << "Before swapping:" << endl;
            cout << "First number: " << num1 << endl;
            cout << "Second number: " << num2 << endl;
            
            // Swapping
            int temp = num1;
            num1 = num2;
            num2 = temp;
        }
        
        void display() {
            cout << "\nAfter swapping:" << endl;
            cout << "First number: " << num1 << endl;
            cout << "Second number: " << num2 << endl;
        }
};

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    
    SwapNumbers obj(a, b);  // Parameterized constructor called
    obj.display();
    return 0;
}
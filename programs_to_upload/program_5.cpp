/*5. Display the product of two numbers using single inheritance where numbers are declared inside the base class. Function of product both numbers defined in the derived class.*/
#include <iostream>
using namespace std;

// Base class
class Numbers {
    protected:
        int num1, num2;
    
    public:
        void getNumbers() {
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
        }
};

// Derived class
class Product : public Numbers {
    public:
        void calculateProduct() {
            cout << "Product of numbers is: " << num1 * num2 << endl;
        }
};

int main() {
    Product obj;
    obj.getNumbers();
    obj.calculateProduct();
    return 0;
}
// 2. Write a program to overload increment operator to increment value of a by 5, decrement operator to decrement value of a by 1, negation operator to change the value of a from -ve to +ve and +ve to -ve using member function and friend function.

#include <iostream>
using namespace std;

class Number {
private:
    int a;
public:
    Number(int x) : a(x) {}

    // Member function for increment operator overloading
    void operator++() {
        a += 5;
    }

    // Member function for decrement operator overloading
    void operator--() {
        a -= 1;
    }

    // Friend function for negation operator overloading
    friend void operator-(Number &obj) {
        obj.a = -obj.a;
    }

    void display() {
        cout << "Value of a: " << a << endl;
    }
};

int main() {
    Number num(10);

    ++num; // Increment by 5
    num.display();

    --num; // Decrement by 1
    num.display();

    -num; // Negate value
    num.display();

    return 0;
}

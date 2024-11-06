// 3. Write a program to overload + and - operator to find the sum of two numbers using member function and friend function.

#include <iostream>
using namespace std;

class Number
{
private:
    int a;

public:
    Number(int x) : a(x) {}

    // Member function to overload +
    Number operator+(const Number &obj)
    {
        return Number(a + obj.a);
    }

    // Friend function to overload -
    friend Number operator-(const Number &obj1, const Number &obj2)
    {
        return Number(obj1.a - obj2.a);
    }

    void display()
    {
        cout << "Value: " << a << endl;
    }
};

int main()
{
    Number num1(20), num2(10);

    // Using + operator
    Number result1 = num1 + num2;
    result1.display();

    // Using - operator
    Number result2 = num1 - num2;
    result2.display();

    return 0;
}

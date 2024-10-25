/*9. Create a program on hybrid inheritance where we have five classes A, B, C, D and E. Class B, C and D inherit from class A and class E inherit from class B.    */

#include <iostream>
using namespace std;

// Base class A
class A {
    protected:
        int data;
    public:
        A() {
            cout << "Enter data for class A: ";
            cin >> data;
        }
};

// Classes inheriting from A
class B : public A {
    protected:
        int b_data;
    public:
        B() {
            cout << "Enter data for class B: ";
            cin >> b_data;
        }
};

class C : public A {
    protected:
        int c_data;
    public:
        C() {
            cout << "Enter data for class C: ";
            cin >> c_data;
        }
};

class D : public A {
    protected:
        int d_data;
    public:
        D() {
            cout << "Enter data for class D: ";
            cin >> d_data;
        }
};

// Class E inheriting from B
class E : public B {
    public:
        void display() {
            cout << "Data from class A: " << data << endl;
            cout << "Data from class B: " << b_data << endl;
        }
};

int main() {
    E obj;
    obj.display();
    return 0;
}
// 4. Create a friend class for three classes A, B and C. Create private and protected data members in class A, B and C. Access all the private and protected data with the help of friend class. (Note: in friend class, you can create single function for all classes or separate function for all classes)
#include <iostream>
using namespace std;

class A
{
private:
    int dataA = 10; // Private member
protected:
    int dataB = 20;           // Protected member
    friend class FriendClass; // Friend class declaration
};

class B
{
private:
    int dataC = 30; // Private member
protected:
    int dataD = 40;           // Protected member
    friend class FriendClass; // Friend class declaration
};

class C
{
private:
    int dataE = 50; // Private member
protected:
    int dataF = 60;           // Protected member
    friend class FriendClass; // Friend class declaration
};

class FriendClass
{
public:
    // Function to display private and protected data from all classes
    void displayData(A a, B b, C c)
    {
        cout << "Class A - Private: " << a.dataA << ", Protected: " << a.dataB << endl;
        cout << "Class B - Private: " << b.dataC << ", Protected: " << b.dataD << endl;
        cout << "Class C - Private: " << c.dataE << ", Protected: " << c.dataF << endl;
    }
};

int main()
{
    A a;
    B b;
    C c;
    FriendClass friendObj;
    friendObj.displayData(a, b, c); // Call function to display data
    return 0;
}

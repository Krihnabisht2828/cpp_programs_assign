// 5. Create a friend function for three classes A, B and C. Create private and protected data members in class A, B and C. Access all the private and protected data with the help of friend function.
#include <iostream>
using namespace std;

// Forward declaration of classes needed for friend function declaration
class A;
class B;
class C;

// Friend function declaration
void displayAllData(A &objA, B &objB, C &objC);

class A
{
private:
    int privateDataA;

protected:
    int protectedDataA;

public:
    // Constructor
    A(int priv = 10, int prot = 20)
    {
        privateDataA = priv;
        protectedDataA = prot;
    }

    // Declaring the friend function
    friend void displayAllData(A &objA, B &objB, C &objC);
};

class B
{
private:
    double privateDataB;

protected:
    double protectedDataB;

public:
    // Constructor
    B(double priv = 30.5, double prot = 40.5)
    {
        privateDataB = priv;
        protectedDataB = prot;
    }

    // Declaring the friend function
    friend void displayAllData(A &objA, B &objB, C &objC);
};

class C
{
private:
    char privateDataC;

protected:
    string protectedDataC;

public:
    // Constructor
    C(char priv = 'X', string prot = "Protected")
    {
        privateDataC = priv;
        protectedDataC = prot;
    }

    // Declaring the friend function
    friend void displayAllData(A &objA, B &objB, C &objC);
};

// Friend function definition
void displayAllData(A &objA, B &objB, C &objC)
{
    // Accessing private and protected members of class A
    cout << "\nClass A Data:" << endl;
    cout << "Private data: " << objA.privateDataA << endl;
    cout << "Protected data: " << objA.protectedDataA << endl;

    // Accessing private and protected members of class B
    cout << "\nClass B Data:" << endl;
    cout << "Private data: " << objB.privateDataB << endl;
    cout << "Protected data: " << objB.protectedDataB << endl;

    // Accessing private and protected members of class C
    cout << "\nClass C Data:" << endl;
    cout << "Private data: " << objC.privateDataC << endl;
    cout << "Protected data: " << objC.protectedDataC << endl;
}

int main()
{
    // Creating objects of each class
    A objA(15, 25);
    B objB(35.5, 45.5);
    C objC('Y', "Test Protected");

    // Calling the friend function to display all data
    cout << "Displaying all private and protected data using friend function:";
    displayAllData(objA, objB, objC);

    return 0;
}
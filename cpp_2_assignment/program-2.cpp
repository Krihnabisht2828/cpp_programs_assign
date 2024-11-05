// 2. Create a friend class to check if a number is prime or not.
#include <iostream>
using namespace std;

class Number
{
    int value;

public:
    Number(int v) : value(v) {} // Constructor to initialize value
    friend class PrimeChecker;  // Friend class declaration
};

class PrimeChecker
{
public:
    // Function to check if a number is prime
    void checkPrime(Number num)
    {
        bool isPrime = true;
        if (num.value <= 1)
            isPrime = false; // Prime check for values <= 1
        for (int i = 2; i * i <= num.value; ++i)
        { // Check divisibility
            if (num.value % i == 0)
            {
                isPrime = false;
                break;
            }
        }
        // Display if the number is prime or not
        if (isPrime)
            cout << num.value << " is a prime number." << endl;
        else
            cout << num.value << " is not a prime number." << endl;
    }
};

int main()
{
    Number num(7);           // Create a Number object
    PrimeChecker checker;    // Create a PrimeChecker object
    checker.checkPrime(num); // Check if the number is prime
    return 0;
}

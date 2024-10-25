// 11. Create a friend class to check if a number is prime or not.
#include <iostream>
using namespace std;

class Student; // Forward declaration of Student class

class PrimeChecker {
public:
    // Function to check if a number is prime
    bool isPrime(int num) {
        if (num <= 1) return false;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) return false;
        }
        return true;
    }
};

int main() {
    PrimeChecker checker;
    int number = 11; // Example number
    cout << "Is " << number << " a prime number? " << (checker.isPrime(number) ? "Yes" : "No") << endl;
    return 0;
}

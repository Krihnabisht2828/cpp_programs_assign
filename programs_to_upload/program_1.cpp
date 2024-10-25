// 1. Display the sum of first n natural numbers using default constructor
#include <iostream>
using namespace std;

class SumNatural {
    private:
        int n;
        int sum;
    
    public:
        // Default constructor
        SumNatural() {
            cout << "Enter the value of n: ";
            cin >> n;
            sum = 0;
            
            // Calculate sum of first n natural numbers
            for(int i = 1; i <= n; i++) {
                sum += i;
            }
        }
        
        void display() {
            cout << "Sum of first " << n << " natural numbers is: " << sum << endl;
        }
};

int main() {
    SumNatural obj;  // Default constructor called
    obj.display();
    return 0;
}
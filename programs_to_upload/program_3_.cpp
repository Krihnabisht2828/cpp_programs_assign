// 3. Display the sum of all positive numbers of array using copy constructor
#include <iostream>
using namespace std;

class ArraySum {
    private:
        int arr[100];
        int size;
        int sum;
    
    public:
        // Normal constructor
        ArraySum() {
            cout << "Enter size of array: ";
            cin >> size;
            
            cout << "Enter array elements: ";
            for(int i = 0; i < size; i++) {
                cin >> arr[i];
            }
            
            sum = 0;
            for(int i = 0; i < size; i++) {
                if(arr[i] > 0) {  // Add only positive numbers
                    sum += arr[i];
                }
            }
        }
        
        // Copy constructor
        ArraySum(const ArraySum &obj) {
            size = obj.size;
            sum = obj.sum;
            for(int i = 0; i < size; i++) {
                arr[i] = obj.arr[i];
            }
        }
        
        void display() {
            cout << "Sum of positive numbers: " << sum << endl;
        }
};

int main() {
    ArraySum arr1;          // Normal constructor called
    ArraySum arr2 = arr1;   // Copy constructor called
    
    cout << "\nDisplaying sum using original object: " << endl;
    arr1.display();
    
    cout << "\nDisplaying sum using copied object: " << endl;
    arr2.display();
    return 0;
}
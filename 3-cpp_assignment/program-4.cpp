// 4. Write a program to create a template for functions and implement function overloading.


#include <iostream>
#include <string>
using namespace std;

// Class template to store student data
template <typename T>
class Student {
private:
    T name;
    int age;
    string course;
    string department;

public:
    // Constructor to initialize student data
    Student(T n, int a, string c, string d) {
        name = n;
        age = a;
        course = c;
        department = d;
    }

    // Function to display student data
    void display() {
        cout << "Student Data: " << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Course: " << course << endl;
        cout << "Department: " << department << endl;
    }
};

int main() {
    // Create an instance of Student with a string type for name
    Student<string> student1("sam altzman", 20, "Computer Science", "Engineering");

    // Display student data
    student1.display();

    return 0;
}

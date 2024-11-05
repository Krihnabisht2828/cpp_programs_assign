// 3. Create a friend function to display student details in student class and class containing data members are name, age, department, course.
#include <iostream>
using namespace std;

class Student
{
    string name;
    int age;
    string department;
    string course;

public:
    // Constructor to initialize data members
    Student(string n, int a, string d, string c) : name(n), age(a), department(d), course(c) {}
    friend void displayDetails(Student s); // Friend function declaration
};

// Friend function to display student details
void displayDetails(Student s)
{
    cout << "Name: " << s.name << endl;
    cout << "Age: " << s.age << endl;
    cout << "Department: " << s.department << endl;
    cout << "Course: " << s.course << endl;
}

int main()
{
    Student s("Alice", 20, "Computer Science", "B.Tech"); // Create Student object
    displayDetails(s);                                    // Call friend function to display details
    return 0;
}

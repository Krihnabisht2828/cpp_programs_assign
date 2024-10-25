// 12. Create a friend function to display student details in student class and class containing data members are name, age, department, course.
#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string name;
    int age;
    string department;
    string course;

public:
    // Constructor to initialize student details
    Student(string n, int a, string d, string c) : name(n), age(a), department(d), course(c) {}

    // Friend function to display student details
    friend void displayStudentDetails(const Student &s);
};

// Friend function to display student details
void displayStudentDetails(const Student &s)
{
    cout << "Student Details:" << endl;
    cout << "Name: " << s.name << endl;
    cout << "Age: " << s.age << endl;
    cout << "Department: " << s.department << endl;
    cout << "Course: " << s.course << endl;
}

int main()
{
    // Creating a Student object
    Student student("Krishna Bisht", 20, "Computer Science", "B.Tech");
    displayStudentDetails(student); // Displaying student details
    return 0;
}

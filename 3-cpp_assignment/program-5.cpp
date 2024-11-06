// 5. Write a program to create a template for structures and implement students' data with name, age, course and department. hey i want u to write the code for it in a simpler understandable way do include comments for more understanding  .


#include <iostream>
#include <string>
using namespace std;

// Structure template to store student data
template <typename T>  // T is a placeholder for any data type (like string, int, etc.)
struct Student {
    T name;          // Student's name, type T (generic type)
    int age;         // Student's age, an integer
    string course;   // Course name, a string
    string department; // Department name, a string

    // Function to display student data
    void display() {
        cout << "Student Data: " << endl;
        cout << "Name: " << name << endl;  // Display name
        cout << "Age: " << age << endl;    // Display age
        cout << "Course: " << course << endl;  // Display course
        cout << "Department: " << department << endl;  // Display department
    }
};

int main() {
    // Create a Student structure instance with the name as a string (use generic type for name)
    Student<string> student1;

    // Assign values to the student's data
    student1.name = "John Doe";   // Student's name
    student1.age = 21;            // Student's age
    student1.course = "Electrical Engineering";  // Course
    student1.department = "Engineering";         // Department

    // Display student data
    student1.display();

    return 0;
}

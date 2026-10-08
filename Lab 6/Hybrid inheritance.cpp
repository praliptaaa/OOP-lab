Hybrid inheritance : A university database system tracks TeachingAssistant records. A Teaching Assistant is both a Teacher and a Student, both of which inherit from a common root class Person.

#include <iostream>
#include <string>
using namespace std;

// Root Base Class
class Person {
protected:
    string name;
public:
    Person(string n) : name(n) {}
    void displayPerson() {
        cout << "Name: " << name << endl;
    }
};

// Intermediate Class 1 (Virtual Inheritance prevents the Diamond Problem)
class Teacher : virtual public Person {
protected:
    string department;
public:
    Teacher(string n, string dept) : Person(n), department(dept) {}
    void displayTeacher() {
        cout << "Role: Teacher, Department: " << department << endl;
    }
};

// Intermediate Class 2 (Virtual Inheritance)
class Student : virtual public Person {
protected:
    string major;
public:
    Student(string n, string m) : Person(n), major(m) {}
    void displayStudent() {
        cout << "Role: Student, Major: " << major << endl;
    }
};

// Final Derived Class (Hybrid Inheritance)
class TeachingAssistant : public Teacher, public Student {
public:
    // Person constructor is called directly due to virtual inheritance
    TeachingAssistant(string n, string dept, string m) 
        : Person(n), Teacher(n, dept), Student(n, m) {}
        
    void displayTAInfo() {
        cout << "--- Teaching Assistant Profile ---" << endl;
        displayPerson();  // Reused without ambiguity
        displayTeacher();
        displayStudent();
        cout << endl;
    }
};

int main() {
    TeachingAssistant ta("John Doe", "Computer Science", "Software Engineering");
    ta.displayTAInfo();
    return 0;
}
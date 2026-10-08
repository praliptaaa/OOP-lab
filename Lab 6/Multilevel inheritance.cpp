Multi level inheritance : An academic portal tracks student performance through a three-tier class hierarchy before determining final graduation honors.

#include <iostream>
#include <string>
using namespace std;

// Tier 1: Base Class
class Student {
protected:
    int studentID;
    string name;
public:
    Student(int id, string n) : studentID(id), name(n) {}
    void displayStudent() {
        cout << "Student: " << name << " (ID: " << studentID << ")" << endl;
    }
};

// Tier 2: Intermediate Class
class AcademicRecord : public Student {
protected:
    float cgpa;
public:
    AcademicRecord(int id, string n, float c) : Student(id, n), cgpa(c) {}
    void displayRecord() {
        displayStudent();
        cout << "Current CGPA: " << cgpa << endl;
    }
};

// Tier 3: Final Derived Class (Multi-level Inheritance)
class Graduation : public AcademicRecord {
public:
    Graduation(int id, string n, float c) : AcademicRecord(id, n, c) {}
    
    void determineHonors() {
        cout << "--- Graduation Status ---" << endl;
        displayRecord();
        if (cgpa >= 3.8) {
            cout << "Honors: Summa Cum Laude\n" << endl;
        } else if (cgpa >= 3.5) {
            cout << "Honors: Magna Cum Laude\n" << endl;
        } else {
            cout << "Honors: Standard Graduation\n" << endl;
        }
    }
};

int main() {
    Graduation grad(101, "Alice Smith", 3.9);
    grad.determineHonors();
    return 0;
}
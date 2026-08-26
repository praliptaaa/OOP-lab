Write a program to read the following employee information from the keyboard and display it:
Employee Name
Employee Code
Designation
Years of Experience
Age

#include <iostream>
#include <string>
using namespace std;
int main() { 
    string employeeName;
    int employeeCode;
    string designation;
    int yearsOfExperience;
    int age;

    // Reading employee information from the keyboard
    cout << "Enter Employee Name: ";
    getline(cin, employeeName);
    
    cout << "Enter Employee Code: ";
    cin >> employeeCode;
    
    cin.ignore(); // To ignore the newline character left in the buffer
    cout << "Enter Designation: ";
    getline(cin, designation);
    
    cout << "Enter Years of Experience: ";
    cin >> yearsOfExperience;
    
    cout << "Enter Age: ";
    cin >> age;

    // Displaying the employee information
    cout << "\nEmployee Information:" << endl;
    cout << "Name: " << employeeName << endl;
    cout << "Code: " << employeeCode << endl;
    cout << "Designation: " << designation << endl;
    cout << "Years of Experience: " << yearsOfExperience << endl;
    cout << "Age: " << age << endl;

    return 0;
}

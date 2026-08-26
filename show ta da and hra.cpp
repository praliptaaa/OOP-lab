Write a program using a nested class to read and display employee details:
Outer class: ename, code, designation, Basic pay
Inner class: Computes allowances:
           TA: 10% of Basic
           DA: 12% of Basic
           HRA: 20% of Basic


           
#include <iostream>
using namespace std;

class Employee {
private:
    string ename;
    int code;
    string designation;
    float basicPay;

public:
    Employee(string name, int empCode, string empDesignation, float empBasicPay) {
        ename = name;
        code = empCode;
        designation = empDesignation;
        basicPay = empBasicPay;
    }

    class Allowances {
    private:
        float ta, da, hra;

    public:
        Allowances(float basic) {
            ta = 0.10 * basic;
            da = 0.12 * basic;
            hra = 0.20 * basic;
        }

        void displayAllowances() {
            cout << "Allowances:" << endl;
            cout << "TA: " << ta << endl;
            cout << "DA: " << da << endl;
            cout << "HRA: " << hra << endl;
        }
    };

    void displayEmployeeDetails() {
        cout << "Employee Details:" << endl;
        cout << "Name: " << ename << endl;
        cout << "Code: " << code << endl;
        cout << "Designation: " << designation << endl;
        cout << "Basic Pay: " << basicPay << endl;

        Allowances allowances(basicPay);
        allowances.displayAllowances();
    }
};

int main() {
    Employee emp("John Doe", 12345, "Manager", 50000);
    emp.displayEmployeeDetails();
    return 0;
}
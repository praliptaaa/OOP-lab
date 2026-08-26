write  program to input a 3 digit number and add the digits of the number together, then print the result.


#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a 3-digit number: ";
    cin >> number;

    int sum = number / 100 + (number / 10) % 10 + number % 10;
    cout << "Sum of digits: " << sum << endl;

    return 0;
}
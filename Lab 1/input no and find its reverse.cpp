write a program to input a number to find its reverse


#include <iostream>
using namespace std;
int main() {
    int num, reversedNum = 0, remainder;

    // Input a number from the user
    cout << "Enter an integer: ";
    cin >> num;

    // Find the reverse of the number
    int originalNum = num;
    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    // Output the reversed number
    cout << "Reverse of " << originalNum << " is " << reversedNum << endl;

    return 0;
}
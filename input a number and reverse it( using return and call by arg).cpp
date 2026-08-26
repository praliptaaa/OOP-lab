Write a program to input a number and reverse it (using return type and passing value by argument)

#include <iostream>
using namespace std;
int reverseNumber(int num) {
    int reversed = 0;
    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    return reversed;
}
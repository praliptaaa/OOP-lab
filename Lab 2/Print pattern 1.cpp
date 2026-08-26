 Write a program to print the following pyramid patterns
 1
 12
 123
 1234
 12345

 
#include <iostream>
using namespace std;
int main() {
    int rows = 5; // Number of rows for the pyramid

    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << j;
        }
        cout << endl; // Move to the next line after each row
    }

    return 0;
}
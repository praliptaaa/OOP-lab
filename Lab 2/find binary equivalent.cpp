 Write a program to input a decimal number and find its binary equivalent using an array.

 
 #include <iostream>
 using namespace std;
 int main() {
     int decimalNumber;
     cout << "Enter a decimal number: ";
     cin >> decimalNumber;

     // Array to store binary digits
     int binaryArray[32]; // Assuming 32 bits for simplicity
     int index = 0;

     // Convert decimal to binary
     while (decimalNumber > 0) {
         binaryArray[index] = decimalNumber % 2;
         decimalNumber /= 2;
         index++;
     }

     // Print the binary equivalent in reverse order
     cout << "Binary equivalent: ";
     for (int i = index - 1; i >= 0; i--) {
         cout << binaryArray[i];
     }
     cout << endl;

     return 0;
 }
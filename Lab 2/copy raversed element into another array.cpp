 Write a program to input an array of n elements and copy the reversed elements into another array
 
 #include <iostream>
 using namespace std;

 int main() {
     int n;
     cout << "Enter the number of elements: ";
     cin >> n;

     int arr[n];
     cout << "Enter the elements: ";
     for (int i = 0; i < n; i++) {
         cin >> arr[i];
     }

     int reversedArr[n];
     for (int i = 0; i < n; i++) {
         reversedArr[i] = arr[n - 1 - i];
     }

     cout << "Reversed array: ";
     for (int i = 0; i < n; i++) {
         cout << reversedArr[i] << " ";
     }
     cout << endl;

     return 0;
 }
Write a program to input a 3*3 matrix and display its upper triangular matrix (elements on and above the main diagonal)


#include<iostream>
using namespace std;
int main() {
    int matrix[3][3];
    cout << "Enter the elements of the 3x3 matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matrix[i][j];
        }
    }
    cout << "Upper Triangular Matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i <= j) {
                cout << matrix[i][j] << " ";
            } else {
                cout << "0 ";
            }
        }
        cout << endl;
    }
    return 0;
}

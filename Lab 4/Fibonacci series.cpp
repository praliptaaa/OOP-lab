WAP to generate a Fibonacci series of n numbers where n is the input from keyboard using a default constructor.


#include 
using namespace std;

class Fibonacci {
    int n;
public:
    Fibonacci() {
        cout << "Enter the number of terms (n): ";
        cin >> n;
        
        int a = 0, b = 1, next;
        cout << "Fibonacci Series: ";
        for(int i = 0; i < n; i++) {
            cout << a << " ";
            next = a + b;
            a = b;
            b = next;
        }
        cout << endl;
    }
};

int main() {
    Fibonacci fib; 
    return 0;
}
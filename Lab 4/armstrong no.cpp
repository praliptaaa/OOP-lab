WAP to input a no, test if it is an Armstrong no or not using a copy constructor


#include 
#include 
using namespace std;

class Armstrong {
    int num;
    bool isArmstrong;
public:
    Armstrong(int n) : num(n) {
        checkArmstrong();
    }
    
    Armstrong(const Armstrong &obj) {
        num = obj.num;
        checkArmstrong();
    }
    
    void checkArmstrong() {
        int sum = 0, temp = num, digits = 0;
        
        while (temp != 0) { digits++; temp /= 10; }
        
        temp = num;
        while (temp != 0) {
            sum += pow(temp % 10, digits);
            temp /= 10;
        }
        isArmstrong = (sum == num);
    }
    
    void display() {
        if(isArmstrong)
            cout << num << " is an Armstrong number." << endl;
        else
            cout << num << " is NOT an Armstrong number." << endl;
    }
};

int main() {
    int n;
    cout << "Enter a number to check: ";
    cin >> n;
    
    Armstrong a1(n);
    Armstrong a2 = a1; 
    
    a2.display();
    return 0;
}
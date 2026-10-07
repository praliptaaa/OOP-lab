 WAP to demonstrate how all constructors can be used in a program.


#include 
using namespace std;

class Demo {
    int value;
public:
    Demo() {
        value = 0;
        cout << "Default Constructor called. Value: " << value << endl;
    }
    
    Demo(int v) {
        value = v;
        cout << "Parameterized Constructor called. Value: " << value << endl;
    }
    
    Demo(const Demo &obj) {
        value = obj.value;
        cout << "Copy Constructor called. Value: " << value << endl;
    }
};

int main() {
    Demo d1;           
    Demo d2(100);      
    Demo d3(d2);       
    return 0;
}

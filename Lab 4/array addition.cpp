WAP to input an array to add all the elements using a constructor ,object pointer & friend function.


#include 
using namespace std;

class ArraySum {
    int *arr;
    int size;
public:
    ArraySum(int s) {
        size = s;
        arr = new int[size];
        cout << "Enter " << size << " array elements:\n";
        for(int i = 0; i < size; i++) {
            cin >> arr[i];
        }
    }
    
    ~ArraySum() { delete[] arr; }
    
    friend int calculateTotal(ArraySum *ptr);
};

int calculateTotal(ArraySum *ptr) {
    int sum = 0;
    for(int i = 0; i < ptr->size; i++) {
        sum += ptr->arr[i];
    }
    return sum;
}

int main() {
    int n;
    cout << "Enter size of the array: ";
    cin >> n;
    
    ArraySum *objPtr = new ArraySum(n);
    
    cout << "Total Sum of Array Elements: " << calculateTotal(objPtr) << endl;
    
    delete objPtr;
    return 0;
}
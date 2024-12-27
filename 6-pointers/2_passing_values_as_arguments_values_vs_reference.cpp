// Passing arguments as value vs pointer(reference) in function
#include <iostream>
using namespace std;

// Passing argument by value
void passingArgumentByValue(int a){
    a = 10;
    cout << a << endl;
}

// Passing argument by reference
void passingArgumentByReference(int *ptr){
    *ptr = 10;
    cout << ptr << endl;
}

int main(){
    int a = 5;
    // passingArgumentByValue(a);
    passingArgumentByReference(&a);
    cout << a << endl;
    return 0;
}

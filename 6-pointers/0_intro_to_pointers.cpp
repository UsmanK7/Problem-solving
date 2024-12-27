#include <iostream>
using namespace std;
int main(){
    // Adress operator in cpp
    int a = 10;
    int *ptr1 = &a;
    int **ptr2 = &ptr1;

    cout << ptr1<<"="<<ptr2 << endl;
    
    //Deference operator
    cout << *(&a) << endl;
    return 0;
}
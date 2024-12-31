#include <iostream>
using namespace std;

int main(){
    int a = 5;
    int b = 12;
    int *ptr1 = &a;

    int *ptr2 = ptr1 + 3;
    cout<<ptr1<<endl;
    cout<<ptr2<<endl;
    cout<<ptr2 - ptr1 <<endl;
    

    }
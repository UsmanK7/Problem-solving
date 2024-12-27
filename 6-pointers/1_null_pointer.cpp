#include <iostream>
using namespace std;
int main(){
    int *ptr3 = NULL;
    cout << ptr3 << endl;
    cout << *ptr3 << endl; //segmentation fault
    cout<<"will not be exectued after segmentation fault"<<endl;
    return 0;
}
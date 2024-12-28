#include <iostream>
using namespace std;

// Question # 1

// void multiplyBy2(int a,int &b,int &c){
//     a = a*2;
//     b = b*2;
//     c = c*2;
    
// }

// int main(){
//     int a,b,c;
//     a = 1;
//     c = 2;
//     c = 3;

//     multiplyBy2(a,b,c);
//     cout<<a;
// }

//Question # 3

int main(){
    int a = 5;
    int *ptr = &a;

    cout<<*ptr;
}

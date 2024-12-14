#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    bool isPrime = true;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    for(int i=1;i<sqrt(n);i++){
        if(n%i == 0 && i !=1){
            cout<<n<<" is not a prime number"<<endl;
            isPrime = false;
            break;
        }
    }
    if(isPrime){
        cout<<n<<" is  a prime number"<<endl;
    }
}
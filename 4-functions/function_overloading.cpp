#include <iostream>
using namespace std;

int sum(int a,int b){
    return a + b;
}


int sum(double a,double b){
    return a + b;
}
int main(){
    cout<<sum(2,4)<<endl;
    cout<<sum(2.5,4.5)<<endl;

}
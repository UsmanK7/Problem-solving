#include <iostream>
using namespace std;

int main(){
    //       ****** 
    //      ******  
    //     ******   
    //    ******    
    //   ******     
    //  ******  
    int n=5;
    char star = '*';
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=0;j<=n;j++){
            cout<<star;
        }
        for(int j=0;j<=i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
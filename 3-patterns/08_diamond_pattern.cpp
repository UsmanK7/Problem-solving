#include <iostream>
using namespace std;

int main(){
    cout << endl;
    cout << "Pattern 9" << endl;
    cout << endl;
    //     *
    //    ***
    //   *****
    //  *******
    //   *****
    //    ***
    //     *
    for(int i=0; i<4;i++){
        char staric = '*';
        
        for(int j=0;j<4-i;j++){
            
            cout<<" ";
        }
        for(int j=0;j<2*i-1;j++){
            
            cout<<staric;
        }
        cout<<endl;
    }
    int n =4;
    for(int i=n; i>0;i--){
        char staric = '*';
        
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<staric;
        }
        cout<<endl;
    }
    return 0;
}
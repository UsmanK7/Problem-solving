#include <iostream>
using namespace std;

int main(){
    // 0 0 0 0 
    // 1 1 1 1
    // 2 2 2 2
    // 3 3 3 3
    // 4 4 4 4
    for(int i=0; i<=4; i++){
        cout<<i<<" "<<i<<" "<<i<<" "<<i<<" "<<endl;;        
    }
    cout<<endl;
    // *
    // * *
    // * * *
    // * * * *
    for(int i=0; i<=3;i++){
        char staric = '*';
        int j = -1;
        while(i !=j){
            cout<<staric<<" ";
            j++;
        }
        cout<<endl;
    }
    cout<<endl;
    // * * * *
    // * * *
    // * * 
    // *
    for(int i=4; i!=0;i--){
        char staric = '*';
        int j = 0;
        while(i != j){
            cout<<staric<<" ";
            j++;
        }
        cout<<endl;
    }
    cout<<endl;
    // * * * *
    // * * *
    // * * 
    // *
}
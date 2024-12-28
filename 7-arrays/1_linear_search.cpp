#include <iostream>
using namespace std;

int linearSearch(int arr[],int lenghth,int element){
    for(int i=0;i<lenghth;i++){
        if(arr[i] == element){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {10,20,5,40,30,60,50};
    int len = sizeof(arr)/sizeof(int);
    cout<<linearSearch(arr,len,30);
    return 0;
}
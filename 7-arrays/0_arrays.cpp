#include <iostream>
using namespace std;

void printArr(int num[],int length){
    for(int i=0;i<length;i++){
        cout<<num[i]<<" ";
    }
}

int main(){
    int arr[5] = {1,2,3,4,5};
    int len = sizeof(arr) / sizeof(int);
    printArr(arr,len);
    
}
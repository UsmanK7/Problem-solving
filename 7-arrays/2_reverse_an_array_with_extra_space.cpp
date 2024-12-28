#include <iostream>
using namespace std;

void printArr(int num[],int length){
    for(int i=0;i<length;i++){
        cout<<num[i]<<" ";
    }
}

int main(){
    int arr[5] = {1,2,3,4,5};
    int len = sizeof(arr)/sizeof(int);
    int copyArr[len];
    int j=0;
    //use the extra space copyArr and reverse the arr
    for(int i=len-1;i>=0;i--){
        copyArr[j] = arr[i];
        j++;
    }
    //put back in arr
    for(int i=0;i<len;i++){
        arr[i] = copyArr[i];
    }
    printArr(arr,len);

    return 0;
}
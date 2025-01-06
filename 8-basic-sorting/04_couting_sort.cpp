#include <iostream>
using namespace std;

void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void countSort(int arr[],int n){
    int freq[100000] = {0};
    int minVal = INT_MAX, maxVal = INT_MIN;
    for(int i=0; i<n; i++){
        freq[arr[i]]++;
    }

    printArr(freq,n);

}

int main(){
    int arr[] = {1,4,1,3,2,4,3,7};
    int n = sizeof(arr)/sizeof(int);
    countSort(arr,n);
}
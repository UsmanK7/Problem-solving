#include <iostream>
using namespace std;

int binarySearch(int *arr,int n,int key){
    int st=0,end=n-1;
    while(st<=end){
        int mid = (st+end)/2;
        // cout<<arr[mid]<<endl;
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] > key){
            end = mid-1;
        }
        else{
            st = mid+1;

        }
    }
    return -1;
}

int main(){
    int arr[] = {2,4,6,8,10,12,14,16};
    int n = sizeof(arr)/sizeof(int);
    int key = 4;
    if(binarySearch(arr,n,key) == -1){
        cout<<"Element not found"<<endl;
    }
    else{
        cout<<"Element found at index "<<binarySearch(arr,n,key)<<endl;
    }
}
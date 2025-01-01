#include <iostream>
using namespace std;
void MaxSubArrayKadenceAlgo(int arr[],int n){
    int currSum;
    int maxSum = INT_MIN;
    for(int i=0;i<n;i++){
        currSum += arr[i];
        maxSum =  max(maxSum, currSum);
        if(currSum < 0){
            currSum = 0;
        }
    }
    cout<<"Max sum using kadence algorithm is : "<<maxSum;
}

int main(){
    int arr[] = {2, -3, 6,-5 ,4, 2};
    int n = sizeof(arr)/sizeof(int);
    MaxSubArrayKadenceAlgo(arr,n);
}
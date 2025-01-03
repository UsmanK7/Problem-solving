#include <iostream>
using namespace std;

void bestTimeToBuyAndSellStocks(int arr[], int n){
    int bestBuy[n];
    bestBuy[0] = INT_MAX;
    int bestProfit = INT_MIN;
    int bestProfitIndex = 0;
    for(int i=1; i<n; i++){
        bestBuy[i] = min(arr[i-1], bestBuy[i-1]);
        if(bestProfit < arr[i]-bestBuy[i]){
            bestProfit = arr[i]-bestBuy[i];
            bestProfitIndex = i;
        }
    }
    cout<<"Best time to sell is at index "<<bestProfitIndex<<" where stock price is "<<arr[bestProfitIndex]<<" with profit of "<<bestProfit<<endl;

}

int main(){
    int arr[] = {7,1,5,3,6,4};
    int n = sizeof(arr)/sizeof(int);

    bestTimeToBuyAndSellStocks(arr,n);
}





















// My solution of n2 time complexity

// #include <iostream>
// using namespace std;

// void buyAndSellStocks(int arr[],int n){
//     int min = INT_MIN;
//     int minimumIndex = 0;
//     int max = INT_MAX;
//     int maximumIndex = 0;

//     for(int i=0;i<n;i++){
//         if(max > arr[i] ){
//             max = arr[i];
//             minimumIndex = i;
//         }
//     }
//     for(int i=0;i<n;i++){
//         if(min < arr[i] && minimumIndex < i){
//             min = arr[i];
//             maximumIndex = i;
//         }
//     }
//     cout<<"Buy when the stock is "<<max<<" at index: "<<minimumIndex;
//     cout<<endl;
//     cout<<"Sell when the stock is "<<min<<" at index: "<<maximumIndex;
//     // cout<<maximumIndex;
// }

// int main(){
//     int arr[] = {7,1,5,3,6,4};
//     int n = sizeof(arr)/sizeof(int);
//     buyAndSellStocks(arr,n);

// }
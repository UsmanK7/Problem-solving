#include <iostream>
using namespace std;
void trappingRainWater(int bars[], int n)
{
    int leftMax[n];
    leftMax[0] = INT_MIN;
    int rightMax[n];
    rightMax[n - 1] = INT_MIN;
    for (int i = 1; i < n; i++)
    {
        leftMax[i] = max(leftMax[i - 1], bars[i - 1]);
    }
    for (int i = n - 2; i >= 0; i--)
    {
        rightMax[i] = max(rightMax[i + 1], bars[i + 1]);
    }

    int waterTrapped = 0;
    for (int i = 1; i < n - 1; i++)
    {
        int currWater = min(leftMax[i], rightMax[i]) - bars[i];
        if (currWater > 0)
        {
            waterTrapped += currWater;
        }
    }

    // for (int i = 0; i < sizeof(leftMax) / sizeof(int); i++)
    // {
    //     cout << leftMax[i] << " ";
    // }
    // cout << endl;
    // for (int i = 0; i < sizeof(rightMax) / sizeof(int); i++)
    // {
    //     cout << rightMax[i] << " ";
    // }
    // cout << endl;

    cout <<"Total water trapped is"<< waterTrapped;
}

int main()
{
    int bars[] = {4, 2, 0, 6, 3, 2, 5};
    int n = sizeof(bars) / sizeof(int);
    trappingRainWater(bars, n);
}

// MY solution

// #include <iostream>
// using namespace std;

// void printArr(int arr[],int n){
//     cout<<"[";
//     for(int i = 0; i<n; i++){
//         cout<<arr[i]<< " ";
//     }
//     cout<<"]";
// }

// void trappingRainWater(int bars[], int n){
//     int waterTrapped[n];
//     waterTrapped[0] = 0;
//     waterTrapped[n-1] = 0;

//     for(int i=1;i<n-1;i++){
//         int left_max = bars[i]; //2
//         int right_max = bars[i]; //2
//         for(int j=i; j>=0; j--){
//             if(left_max < bars[j]) {
//                 if(bars[j] > bars[j-1] || j==0){
//                     left_max = bars[j];
//                     break;
//                 }
//             }
//         }
//         for(int j=i; j<n; j++){
//             if(right_max < bars[j]){

//                 if(bars[j] > bars[j+1] || j==n-1){
//                     right_max = bars[j];
//                     break;
//                 }
//             }
//         }

//         waterTrapped[i] = min(left_max,right_max) - bars[i];
//         cout<<waterTrapped[i]<<" litres water trapped at building "<<i<<endl;
//     }
// }

// int main(){
//     int bars[] = {4,2,0,6,3,2,8};
//     int n = sizeof(bars)/sizeof(int);

//     trappingRainWater(bars,n);
// }
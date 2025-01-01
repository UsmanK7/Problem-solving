#include <iostream>
using namespace std;

void maxSubArray(int arr[], int n)
{
    int MaxSum = INT_MIN;
    for (int start = 0; start < n; start++)
    {
        for (int end = start; end < n; end++)
        {
            int currSum = 0;
            for (int i = start; i <= end; i++)
            {
                currSum += arr[i];
            }

            MaxSum = max(MaxSum, currSum);
        }
    }
    cout << "The maximum sum of subarray is: " << MaxSum << endl;
}
int main()
{
    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);
    maxSubArray(arr, n);
}
#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertionSort(int arr[], int n)
{
    for (int curr = 1; curr < n; curr++)
    {
        for (int i = curr-1; i >= 0; i--)
        {
            
            if (arr[i] > arr[i+1])
            {
                int temp = arr[i+1];
                arr[i+1] =  arr[i];
                arr[i] = temp;
            }
        }
    }
}

int main()
{
    int arr[] = {5, 4, 1, 3, 2};
    int n = sizeof(arr) / sizeof(n);
    printArray(arr, n);
    insertionSort(arr, n);
    printArray(arr, n);
}
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

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int minimum = INT_MAX;
        int minIndex = 0;
        for (int j = i; j < n; j++)
        {
            if (minimum > arr[j])
            {
                minimum = arr[j];
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = minimum;
        arr[minIndex] = temp;
    }
}

int main()
{
    int arr[] = {5, 4, 1, 3, 2};
    int n = sizeof(arr) / sizeof(int);
    printArray(arr, n);
    selectionSort(arr, n);
    printArray(arr, n);
}
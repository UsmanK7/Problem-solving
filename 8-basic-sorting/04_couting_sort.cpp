#include <iostream>
#include <climits> // For INT_MAX and INT_MIN
using namespace std;

void printArr(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

void countSort(int arr[], int n) {
    int minVal = INT_MAX, maxVal = INT_MIN;

    // Find the minimum and maximum values
    for (int i = 0; i < n; i++) {
        minVal = min(minVal, arr[i]);
        maxVal = max(maxVal, arr[i]);
    }

    int range = maxVal - minVal + 1; // Range of input values
    int* freq = new int[range]();   // Dynamically allocate and initialize to 0

    // Step 1: Count frequencies
    for (int i = 0; i < n; i++) {
        freq[arr[i] - minVal]++;
    }

    // Step 2: Sort the array using the frequency array
    for (int i = 0, j = 0; i < range; i++) {
        while (freq[i] > 0) {
            arr[j++] = i + minVal; // Normalize the value back
            freq[i]--;
        }
    }

    delete[] freq; // Free dynamically allocated memory
}

int main() {
    int arr[] = {1, 4, 1, 3, 2, 4, 3, 7};
    int n = sizeof(arr) / sizeof(int);
    
    cout << "Original Array: ";
    printArr(arr, n);
    cout << endl;

    countSort(arr, n);

    cout << "Sorted Array: ";
    printArr(arr, n);
    cout << endl;

    return 0;
}

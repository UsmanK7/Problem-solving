#include <iostream>
using namespace std;

void printSubArray(int arr[], int n){
    for (int start = 0; start < n; start++){
        for (int end = start; end < n; end++){
            cout<<"(";
            for (int i = start; i <= end; i++)
            {
                cout << arr[i];
                
            }
            cout<<")";
            cout << ", ";
        }
        cout << endl;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);
    printSubArray(arr, n);
}
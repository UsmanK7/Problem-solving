#include <iostream>
using namespace std;

int main(){
    cout << endl;
    cout << "Pattern 2" << endl;
    cout << endl;
    // *
    // * *
    // * * *
    // * * * *
    for (int i = 0; i <= 3; i++)
    {
        char staric = '*';
        int j = -1;
        while (i != j)
        {
            cout << staric << " ";
            j++;
        }
        cout << endl;
    }
    return 0;
}
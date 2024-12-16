#include <iostream>
using namespace std;

int main(){
    cout << endl;
    cout << "Pattern 3" << endl;
    cout << endl;
    // * * * *
    // * * *
    // * *
    // *
    for (int i = 4; i != 0; i--)
    {
        char staric = '*';
        int j = 0;
        while (i != j)
        {
            cout << staric << " ";
            j++;
        }
        cout << endl;
    }
    return 0;  
}
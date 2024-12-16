#include <iostream>
using namespace std;

int main(){
    cout << endl;
    cout << "Pattern 6" << endl;
    cout << endl;
    // *****
    // *   *
    // *   *
    // *****

    for (int i = 0; i < 4; i++)
    {
        char staric = '*';
        cout << staric;
        if (i != 1 && i != 2)
        {
            cout << staric << staric << staric;
        }
        else
        {
            cout << " " << " " << " ";
        }
        cout << staric;
        cout << endl;
    }
    return 0;
}
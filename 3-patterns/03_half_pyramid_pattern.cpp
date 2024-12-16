#include <iostream>
using namespace std;

int main(){
    cout << endl;
    cout << "Pattern 4" << endl;
 
    // 1
    // 12
    // 123
    // 1234
    for (int i = 0; i <= 4; i++)
    {
        // char staric = '*';
        int j = 0;
        while (i != j)
        {
            j++;
            cout << j;
        }
        cout << endl;
    }
    return 0;
}
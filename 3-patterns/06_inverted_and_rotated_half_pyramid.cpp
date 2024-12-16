#include <iostream>
using namespace std;

int main(){
    cout << endl;
    cout << "Pattern 7" << endl;
    cout << endl;
    //     *
    //    **
    //   ***
    //  ****

    for (int i = 0; i < 4; i++)
    {
        char staric = '*';
        j = 3 - i;
        while (j != 0)
        {
            cout << " ";
            j--;
        }
        int z = -1;
        while (z != i)
        {
            cout << staric;
            z++;
        }
        cout<<endl;
    }

    return 0;
}
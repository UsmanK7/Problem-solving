#include <iostream>
using namespace std;

int main(){
    cout << endl;
    cout << "Pattern 5" << endl;
    cout << endl;
    // A
    // BC
    // DEF
    // GHIJ
    int j = 0;
    for (int i = 0; i <= 3; i++)
    {
        char arr[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

        int loop_count = -1;
        while (loop_count != i)
        {
            cout << arr[j];
            j++;
            loop_count++;
        }
        cout << endl;
    }

    return 0;
}
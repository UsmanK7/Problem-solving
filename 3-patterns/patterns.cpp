#include <iostream>
using namespace std;

int main()
{
    cout << endl;
    cout << "Pattern 1" << endl;
    cout << endl;
    // 0 0 0 0
    // 1 1 1 1
    // 2 2 2 2
    // 3 3 3 3
    // 4 4 4 4
    for (int i = 0; i <= 4; i++)
    {
        cout << i << " " << i << " " << i << " " << i << " " << endl;
        ;
    }
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
    cout << endl;
    cout << "Pattern 4" << endl;
    cout << endl;
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

    cout << endl;
    cout << "Pattern 8" << endl;
    cout << endl;
    //  1
    //  2  3
    //  4  5  6
    //  7  8  9  10
    //  11 12 13 14
}
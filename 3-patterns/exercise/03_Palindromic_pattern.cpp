#include <iostream>
using namespace std;

int main()
{
    // Palindromic pattern
    int n = 5;
    char star = '*';
    for (int i = 0; i < n; i++)
    {
        int val_count = (2 * i + 1)/2 +1;
        bool val_reach_zero =false;
       
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i + 1; j++)
        {
            cout<<val_count;
            if(val_reach_zero==false){
                val_count--;
            }
            if(val_count == 0){
                val_count = 1;
                val_reach_zero = true;
            }
            if(val_reach_zero ==true){
                val_count++;
            }
        }
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
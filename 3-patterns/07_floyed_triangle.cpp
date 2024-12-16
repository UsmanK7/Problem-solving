#include <iostream>
using namespace std;

int main(){
     cout << endl;
    cout << "Pattern 8" << endl;
    cout << endl;
    //  1
    //  2  3
    //  4  5  6
    //  7  8  9  10
    //  11 12 13 14
    int z = 0;
    for(int i=0;i<=4;i++){
        for(int j=-1;j!=i;j++){
            z++;
            cout<<z<<" ";
        }
        cout<<endl;
    }

    return 0;
}
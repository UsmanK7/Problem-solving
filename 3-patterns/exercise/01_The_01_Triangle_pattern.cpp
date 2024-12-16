#include <iostream>
using namespace std;

int main()
{
    // 1
    // 01
    // 101
    // 0101
    // 10101
    int n=5;
    int z=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(z % 2 == 0){
                cout<<0<<" ";
            }else{
                cout<<1<<" ";
            }
            z++;
        }
        cout<<endl;
    }
    
    return 0;
}
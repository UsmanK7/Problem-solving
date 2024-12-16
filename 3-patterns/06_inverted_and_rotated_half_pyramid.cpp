#include <iostream>
using namespace std;

int main() {
    cout << endl;
    cout << "Pattern 7" << endl;
    cout << endl;
    //     *
    //    **
    //   ***
    //  ****

    for (int i = 0; i < 4; i++) {
        // Print spaces
        for (int j = 0; j < 3 - i; j++) {
            cout << " ";
        }
        // Print stars
        for (int z = 0; z <= i; z++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

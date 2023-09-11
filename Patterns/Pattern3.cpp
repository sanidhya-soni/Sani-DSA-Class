#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter N: ";
    cin >> n;

    int side = 1;
    int count = 1;

    for(int i = 1; i <= n; i++) {

        // Printing Spaces
        for(int j = 1; j <= n-i; j++) {
            cout << " ";
        }

        for(int j = 1; j <= i + i - 1; j++) {
            if(side == 1) {
                cout << count++;
            }
            else {
                cout << count--;
            }
        }

        cout << endl;
        if(side == 1) {
            count = (i+1) * (i+1);
        }
        else {
            count = i * i + 1;
        }
        side *= -1;

    }

    return 0;
}


// n = 5;

//     1
//    432
//   56789
//    678
//     5
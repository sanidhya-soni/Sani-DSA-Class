#include <iostream>
using namespace std;

int main() {

    int n, i, j, k;
    cout << "Enter N: ";
    cin >> n;

    for(i = 1; i <= n; i++) {

        // Printing Spaces
        for(j = 1; j <= n-i; j++) {
            cout << " ";
        }
        
        // Printing Starting Numbers
        for(j = 1; j <= i; j++) {
            cout << j;
        }

        // Printing Ending Numbers
        for(k = j - 2; k >= 1; k--) {
            cout << k;
        }

        cout << endl;
        
    }

    return 0;
}


// n = 5

//     1
//    121
//   12321
//  1234321
// 123454321
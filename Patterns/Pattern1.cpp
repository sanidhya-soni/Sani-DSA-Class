#include <iostream>
using namespace std;

int main() {

    int n, i, j;

    cin >> n;
    cout << endl << endl;

    for(i = 1 ; i <= n; i++) {
        for(j = 1; j <= i; j++) {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}

// n = 5

// 1
// 12
// 123
// 1234
// 12345
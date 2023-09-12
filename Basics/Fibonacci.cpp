#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int main() {

    int a, b, c;

    a = -1;
    b = 1;

    int n;
    cout << "Enter N: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }

    return 0;
}

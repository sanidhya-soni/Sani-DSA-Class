#include <iostream>
using namespace std;

int main() {

    int n, i, count = 0;
    cout << "Enter a No: ";
    cin >> n;

    if(n <= 1) {
        cout << n << " is Nether Prime Nor Composite." << endl;
        return 0;
    }

    for(i = 2; i <= n/2; i++) {
        if(n % i == 0)
            count++;
    }

    if(count == 0) {
        cout << n << " is Prime" << endl;
    }
    else {
        cout << n << " is not Prime" << endl;
    }

    return 0;
}

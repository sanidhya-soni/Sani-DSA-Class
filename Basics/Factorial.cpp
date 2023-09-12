#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter a No: ";
    cin >> n;

    int factorial = 1;

    for(int i = 1; i <= n; i++) {
        factorial = factorial * i;
    }

    cout << "Factorial: " << factorial << endl;

    return 0;
}

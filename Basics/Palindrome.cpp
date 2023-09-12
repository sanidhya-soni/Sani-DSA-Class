#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter N: ";
    cin >> n;

    int r, sum = 0, n1 = n;

    while(n > 0) {
        r = n % 10;
        sum = sum * 10 + r;
        n /= 10;
    }

    if(n1 == sum) {
        cout << "Palindrome" << endl;
    }
    else {
        cout << "Not Palindrome" << endl;
    }

    return 0;
}

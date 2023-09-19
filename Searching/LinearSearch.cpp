#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int main() {

    int arr[] = {1, 2, 5, 9, 12, 8, 7};

    int n;
    cout << "Enter N: ";
    cin >> n;
    int i;
    for(i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
        if(arr[i] == n) {
            cout << "Found at " << i + 1 << endl;
            break;
        }
    }

    if(i == sizeof(arr)/sizeof(arr[0])) {
        cout << "Not Found" << endl;
    }

    return 0;
}

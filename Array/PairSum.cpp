#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int main() {

    vector<int> arr;
    int n;
    cout << "Enter N: ";
    cin >> n;
    cout << endl << "Enter " << n << " Values" << endl;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    int sum;
    cout << "Enter Sum: ";
    cin >> sum;

    cout << endl << endl;
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == sum)
                cout << "Pair: (" << arr[i] << " , " << arr[j] << ")" << endl;
        }
    }

    return 0;
}

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
    cout << "Enter Triplet Sum: ";
    cin >> sum;

    cout << endl << endl;
    for(int i = 0; i < n - 2; i++) {
        for(int j = i + 1; j < n - 1; j++) {
            for(int k = j + 1; k < n; k++) {
                if(arr[i] + arr[j] + arr[k] == sum) {
                    cout << "Pair: (" << arr[i] << " , " << arr[j] << " , " << arr[k] << ")" << endl;
                }
            }
        }
    }

    return 0;
}

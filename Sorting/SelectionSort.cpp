#include <iostream>
#include <vector>
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

    for(int i = 0; i < n - 1; i++) {
        int min = i;
        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[min]) {
                min = j;
            }
        }
        swap(arr[min], arr[i]);
    }
    
    cout << endl << "Output: ";
    for(auto i: arr) {
        cout << i << " ";
    }

    return 0;
}

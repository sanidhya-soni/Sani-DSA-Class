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

    int element;
    cout << "Enter element to be searched: ";
    cin >> element;





    int start = 0, end = n - 1, mid;

    while(start <= end) {

        mid = (start + end) / 2;
        
        if(arr[mid] == element) {
            cout << "Found at position: " << mid + 1 << endl;
            break;
        }

        else if(arr[mid] > element) {
            end = mid - 1;
        }

        else {
            start = mid + 1;
        }
    }


    return 0;
}

#include <iostream>
using namespace std;

int main() {

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // int arr2[10];

    // int c = 0;

    int size = sizeof(arr)/sizeof(arr[0]);

    // for(int i = size - 1; i >= 0; i--) {
    //     arr2[c++] = arr[i];
    // }

    // for(int i = 0; i < size; i++) {
    //     cout << arr2[i] << endl;
    // }

    int start = 0;
    int end = size - 1;

    while(start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    for(int i = 0; i < size; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}

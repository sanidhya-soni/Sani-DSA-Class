#include <iostream>
using namespace std;

int main() {

    int arr[10] = {13, 12, 7, 15, 9, 8, 2, 7, 9, 4};

    for(int i = 0; i < 10 - 1; i++) {
        for(int j = 0; j < 10 - i - 1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }

    for(int i: arr) {
        cout << i << endl;
    }

    return 0;
}

#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int main() {

    // int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // cout << "arr = " << arr << endl;
    // cout << "*arr = " << *(arr + 0) << endl;

    // cout << "arr[0] = " << arr[0] << endl;
    // cout << "&arr[0] = " << &arr[0] << endl;

    // cout << "*(arr + 1) = " << *(arr + 1) << endl;


    // for(int i = 0; i < sizeof(arr)/sizeof(arr[0]) + 5; i++) {
    //     *(arr + i) = 500;
    //     cout << *(arr + i) << endl;
    // }

    string str = "Hardik";

    cout << str << endl;

    cout << "Address = " << &str[0] << endl;
    cout << &str << endl;

    return 0;
}

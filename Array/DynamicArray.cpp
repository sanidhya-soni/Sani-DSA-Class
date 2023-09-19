#include <iostream>
#include <vector>
using namespace std;

int main() {


    vector<int> arr(4, -5);
    cout << arr.size() << endl;
    cout << arr.capacity() << endl;
    arr.pop_back();
    cout << arr[3] << endl;
    cout << arr.size() << endl;
    cout << arr.capacity() << endl;

    arr.pop_back();
    cout << arr[2] << endl;
    cout << arr.size() << endl;
    cout << arr.capacity() << endl;
    arr.pop_back();
    cout << arr[1] << endl;
    cout << arr.size() << endl;
    cout << arr.capacity() << endl;





    // // cout << arr[0] << arr[1] << arr[2] << endl;

    // arr.push_back(10);
    // arr.push_back(10);
    // arr.push_back(10);
    // arr.push_back(10);
    // arr.push_back(10);

    // cout << "Size: " << arr.size() << endl;
    // cout << "Capacity: " <<  arr.capacity() << endl;

    // cout << arr[10] << endl;

    return 0;
}

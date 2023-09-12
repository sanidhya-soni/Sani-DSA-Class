#include <iostream>
using namespace std;

int main() {

    int n, x, y, i, count = 0;
    cout << "Enter start range: ";
    cin >> x;
    cout << "Enter end range: ";
    cin >> y;

    for(int range = x; range <= y; range++) {
        count = 0;

        for(i = 2; i <= range/2; i++) {
            if(range % i == 0)
                count++;
        }

        if(count == 0) {
            cout << range << " is Prime" << endl;
        }
        // else {
        //     cout << range << " is not Prime" << endl;
        // }
    }

    return 0;
}

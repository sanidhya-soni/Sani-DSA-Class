#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int main() {

    int a = 10;

    int *b = &a;

    int **c = &b;

    int ***d = &c;

    cout << c << endl;

    cout << *d << endl;

    return 0;
}

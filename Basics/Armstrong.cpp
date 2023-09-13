// Armstrong Number
#include <iostream>
using namespace std;

int power(int d, int p)
{
    int sum = 1;
    for (int i = 1; i <= p; i++)
    {
        sum *= d;
    }
    return sum;
}

int main()
{
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;
    int d, p = 0, sum = 0, temp;
    temp = n;
    while (temp) // to count no. of digits
    {
        temp = temp / 10;
        p++;
    }
    temp = n;
    while (temp)
    {
        d = temp % 10;
        sum = sum + power(d, p);
        temp = temp / 10;
    }
    if (sum == n)
    {
        cout << "Armstrong Number.";
    }
    else
        cout << "Not an Armstrong Number.";
}

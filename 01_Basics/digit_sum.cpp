#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0, last_digit;
    cout << "Enter the number: ";
    cin >> n;

    while (n != 0)
    {
        last_digit = n % 10;
        sum = sum + last_digit;
        n = n / 10;
    }

    cout << sum;
}
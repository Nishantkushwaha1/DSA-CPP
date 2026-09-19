#include <iostream>
using namespace std;
int main()
{
    int n, last_digit, reverse = 0;
    cout << "Enter the number: ";
    cin >> n;

    while (n > 0)
    {
        last_digit = n % 10;
        reverse = reverse * 10 + last_digit;
        n = n / 10;
    }

    cout << reverse;
}

// Print the sum and reverse of a number:

#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0, rev = 0, last_digit;

    cout << "Enter the number: ";
    cin >> n;
    int num2 = n;

    while (n != 0)
    {
        last_digit = n % 10;
        rev = rev * 10 + last_digit;
        n = n / 10;
    }

    cout << "The reverse and sum of number: " << rev + num2 << endl;
}
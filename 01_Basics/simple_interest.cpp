#include <iostream>
using namespace std;
int main()
{
    float p, r, t, si;
    cout << "Enter principle: ";
    cin >> p;
    cout << "Enter rate of interest: ";
    cin >> r;
    cout << "Enter time in year: ";
    cin >> t;
    si = (p * r * t) / 100;
    cout << "The simple interest is: " << si;
}
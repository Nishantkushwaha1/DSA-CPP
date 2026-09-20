// Take real number input and check if it is an integer or not.

#include <iostream>
using namespace std;
int main()
{
    float x;
    cout << "Enter the real number: ";
    cin >> x;
    
    int y = (int)x;
    // cout<<y;
    if (x == y)
    {
        cout << "It is integer.";
    }
    else
    {
        cout << "It is not integer.";
    }
}
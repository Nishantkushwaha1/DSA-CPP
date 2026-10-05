#include <iostream>
using namespace std;
int main()
{
    int x = 7;
    int *ptr = &x;
    cout << *ptr << endl;

    *ptr = 10;
    cout << x << endl;
    
}
#include <iostream>
using namespace std;
int main()
{
    int x = 7;
    int *ptr = &x;

    cout << &x << endl;  // 0x61ff08
    cout << ptr << endl; // 0x61ff08
    cout << &ptr << endl;
}
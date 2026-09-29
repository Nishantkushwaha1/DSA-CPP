#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a, b;
    cout << "Enter a and b:";
    cin >> a >> b;

    // Using 3rd variable:
    //  int temp=a;
    //  a=b;
    //  b=temp;

    // Without Using 3rd Variable:
    //  a=a+b;
    //  b=a-b;
    //  a=a-b;

    swap(a, b);
    cout << a << " " << b;
}
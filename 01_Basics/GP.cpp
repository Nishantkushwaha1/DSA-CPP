
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the no. of terms: ";
    cin >> n;

    // // 1 2 4 8 16
    // int a=1, r=2;
    // for(int i=1;i<=n;i++)
    // {
    //     cout<<a<<" ";
    //     a=a*r;
    // }

    // 2 6 18 54 ....
    // int a=2, r=3;
    // for(int i=1;i<=n;i++)
    // {
    //     cout<<a<<" ";
    //     a=a*r;
    // }

    // 99 95 91 87 ....

    int a = 99, d = 4;
    for (int i = 1; i <= n; i++)
    {
        cout << a << " ";
        a = a - d;
    }
}
// 2 5 8 11 14 .... upto nth term.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the no. of terms: ";
    cin>>n;

    // for(int i=2; i<=3*n-1; i+=3)
    // cout<<i<<" ";

    // for(int i=1; i<=n; i++)
    // cout<<3*i-1<<" ";

    int a=2, d=3;
    for(int i=1; i<=n; i++)
    {
        cout<<a<<" ";
        a=a+d;
    }
}
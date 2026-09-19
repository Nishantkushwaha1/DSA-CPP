#include<iostream>
using namespace std;
int main()
{
    int n, digit=0;
    cout<<"Enter the number: ";
    cin>>n;

    if(n==0) digit++;
    // if (n<0) n=-n;
    while(n != 0)
    {
        n=n/10;
        digit= digit+1;
    }

    cout<<digit;
 

}
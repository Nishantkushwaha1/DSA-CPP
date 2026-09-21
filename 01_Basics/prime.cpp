#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    
    // int factor=0;
    // for(int i=1;i<=n;i++)
    // {
    //     if(n%i==0)
    //     {
    //         // cout<<i<<" ";
    //         factor= factor+1;
    //     }
    // }
    // if(factor==1)   cout<<"Neither Prime nor composite.";
    // else if(factor>=3)   cout<<"Composite number.";
    // else cout<<"Prime number.";

    bool flag = false; // false means prime
    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            flag = true;
            break;
        }
    }
    if (flag == true)
        cout << "Composite number.";
    else
        cout << "Prime number.";
}
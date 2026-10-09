// A B C D
// A B C D
// A B C D
// A B C D

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=n; j++)
//         {
//             cout<<char(j+64)<<" ";
//         }
//         cout<<endl;
//     }

// }

// a a a a
// B B B B
// c c c c
// D D D D

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i % 2 == 0)
            {
                cout << char(64 + i) << " ";
            }
            else
            {
                cout << char(96 + i) << " ";
            }
        }
        cout << endl;
    }
}
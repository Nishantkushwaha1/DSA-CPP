// Given a point (x,y), write a program to find out if it lies in the 1st quadrant, 2nd quadrant, 3rd quadrant, 4th quadrant, on the x-axis, y-axis or at the origin.

#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;

    if (x == 0 && y == 0)        cout << "At origin";
    else if (x == 0)             cout << "at y-axis";
    else if (y == 0)             cout << "at x-axis";
    else if (x > 0 && y > 0)     cout << "1st quadrant.";
    else if (x < 0 && y > 0)     cout << "2nd quadrant.";
    else if (x < 0 && y < 0)     cout << "3rd quadrant.";
    else                         cout << "4th quadrant.";
}

// #include<iostream>
// using namespace std;
// int main()
// {
//     int x,y;
//     cout<<"Enter x: ";
//     cin>>x;
//     cout<<"Enter y: ";
//     cin>>y;

//     if(x==0 && y==0)
//     {
//         cout<<"At origin";
//     }
//     else if (x==0)
//     {
//         cout<<"at y-axis";
//     }
//     else if (y==0)
//     {
//         cout<<"at x-axis";
//     }
//     else if (x>0 && y>0)
//     {
//         cout<<"1st quadrant.";
//     }
//     else if (x<0 && y>0)
//     {
//         cout<<"2st quadrant.";
//     }
//     else if (x<0 && y<0)
//     {
//         cout<<"3st quadrant.";
//     }
//     else
//     {
//         cout<<"4st quadrant.";
//     }

// }


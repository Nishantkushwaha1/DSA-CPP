// Take length and breadth of
// rectangle as input and write a program
// to find whether the area of rectangle is
// greater than its perimeter.

#include<iostream>
using namespace std;
int main()
{
    int l,b;
    cout<<"Enter length: ";
    cin>>l;
    cout<<"Enter breadth: ";
    cin>>b;
    int area=l*b;
    int perimeter=2*(l+b);
    if (area>perimeter)
    {
        cout<<"Area of rectangle is greater than its perimeter.";
    }
    else
    {
        cout<<"Area of rectangle is less than its perimeter.";
    }


}
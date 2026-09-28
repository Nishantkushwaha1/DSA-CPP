#include<iostream>
using namespace std;

int x=8;        //Global Variable

int main()
{
    int x=56;
    cout<<x<<endl;
    cout<<::x<<endl;   //Scope resolution operator
}
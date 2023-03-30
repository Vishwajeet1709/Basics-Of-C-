// Write a C++ program to find the maximum of two numbers.
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two numbers to find which is grater : ";
    cin>>a>>b;
    if(a == b)
    {
        cout<<"Both the numbers are equal.\n";
    }
    else if(a > b)
    {
        cout<<"First number is grater.\n";
    }
    else
    {
        cout<<"Second number is grater.\n";
    }
    return 0;
}
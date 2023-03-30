//Write a C++ program to swap values of two int variables without using third variable
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter any two numbers : ";
    cin>>a>>b;
    cout<<"Before swaping A = "<<a<<" and B = "<<b<<endl;
    a = a+b;
    b = a-b;
    a = a-b;
    cout<<"After swaping A = "<<a<<" and B = "<<b<<endl;
    return 0;
}
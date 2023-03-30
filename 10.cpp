//Write a C++ program to add all the numbers of an array of size 10.
#include<iostream>
using namespace std;
int main()
{
    int i, sum=0,arr[10]={12,34,8,65,2,4,7,23,3,23};
    cout<<"Sum of array elements";
    for(i=0; i<10; i++)
    {
        cout<<" "<<arr[i];
        sum += arr[i];
    }
    cout<<" is = "<<sum<<endl<<endl;
    return 0;
}
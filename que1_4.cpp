//Write a program to accept an integer and check if it is even or odd.

#include<iostream>
using namespace std;
int main()
{
    int no;
    cout<<"enter no=";
    cin>>no;
    if(no%2==0)
    {
        cout<<no<<" is even";
    }
    else
    {
        cout<<no<<" is odd";
    }
}
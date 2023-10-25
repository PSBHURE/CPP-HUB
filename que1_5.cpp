//Write a program to accept a number and check if it is divisible by 5 and 7.

#include<iostream>
using namespace std;
int main()
{
    int no;
    cout<<"enter no=";
    cin>>no;
    if((no%5==0)&&(no%7==0))
    {
        cout<<no<<" is divisible by 5 & 7";
    }
    else
    {
        cout<<no<<" is not divisible by 5 & 7";

    }
}
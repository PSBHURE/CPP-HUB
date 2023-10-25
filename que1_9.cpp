//Write a program to find factorial of a given number. ex:no5  fact=5*4*3*2*1=120

#include<iostream>
using namespace std;
int main()
{
    int i,no,fact=1;
    cout<<"no=";
    cin>>no;
    for(i=no;i>0;i--)
    {
        fact=i*fact;
    }
    cout<<no<<"!="<<fact;
}
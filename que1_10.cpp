//Write a program to find m to the power n. m=3 and n=4 so 3*3*3*3


#include<iostream>
using namespace std;
int main()
{
    int m,n,i,no=1;
    cout<<"enter m & n:";
    cin>>m>>n;
    for(i=n;i>0;i--)
    {
        no=no*m;
    }
    cout<<m<<"power"<<n<<"="<<no;
}
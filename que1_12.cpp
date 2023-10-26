/*
Sum of series :
	1+2+3+….+n
*/

#include<iostream>
using namespace std;
int main()
{
int i,n,sum=0;
cout<<"n=";//upto which term addition perform
cin>>n;
for(i=0;i<=n;i++)
{
    sum=sum+i;
}
cout<<"sum="<<sum;
}
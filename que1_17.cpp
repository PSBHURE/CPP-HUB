/*17:Write a program to check entered number is Armstrong number or not.*/
//153 = (1*1*1)+(5*5*5)+(3*3*3)
#include<iostream>
using namespace std;
int armstrong(int no)
{
    int temp,r,a=0;
    temp=no;
    while(no!=0)
    {
        r=no%10;
        no=no/10;
        a=a+r*r*r;
    }
    no=temp;
    if(a==no)
    return 1;
    else 
    return 0;
}
int main()
{
    int no;
    cout<<"enter no=";
    cin>>no;
    if(armstrong(no))
   cout<<no<<" is amstrong no";
   else
   cout<<no<<" is not amstrong no";

   
   
    return 0;

}

//Write a program to swap two numbers.

#include<iostream>
using namespace std;
int main()
{
   /*
    int no1,no2,temp;
    cout<<"enter no1,no2:";
    cin>>no1>>no2;
    cout<<"before "<<"  no1="<<no1<<"  no2="<<no2<<endl;

    temp=no1;
    no1=no2;
    no2=temp;
    cout<<"after"<<"  no1="<<no1<<"  no2="<<no2<<endl;
    */

   int no1,no2;
   cout<<"enter no1,no2:";
   cin>>no1>>no2;
   cout<<"before"<<"  no1="<<no1<<"  no2="<<no2<<endl;
   no1=no1+no2;
   no2=no1-no2;
   no1=no1-no2;
   cout<<"after"<<"  no1="<<no1<<"  no2="<<no2<<endl;
}
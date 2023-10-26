/*15: Write a  program to enter a number and print its reverse.*/
#include<iostream>
using namespace std;
int revers(int no)
{
    int r,revers=0,temp;
  
    temp=no;
    while(no!=0)
    {
        
        r=no%10;
        no=no/10;
        revers=revers*10+r;   
    }
    no=temp;
  return revers;
}
int main()
{
    int no,a;
    cout<<"enter no=";
    cin>>no;
    a=revers(no);
    cout<<"revers no of "<<no<<"=>"<<a;
}
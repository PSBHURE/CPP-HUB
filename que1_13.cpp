//Check whether the number is palindrome or not?
//121=121 is a palindrome
#include<iostream>
using namespace std;
int palindrome(int no)
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
    if(revers==no)
    {
        return 1;
    }
    else
    {
       
        return 0;
    }
}
int main()
{
    int no,value;
    cout<<"enter no=";
    cin>>value;
    no=palindrome(value);
    if(no)
    cout<<value<<" is palindrome no.";
    else
     cout<<value<<" is not palindrome no.";
}
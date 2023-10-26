//Check if number is a prime number or not.

#include<iostream>
using namespace std;
int main()
{
    int n,i;
    bool flag=true;
    cout<<"n=";
    cin>>n;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag=false;
            break;
        }
        else 
        {
            flag=true;
        }
    }
    if(flag==true)
    cout<<n<<" is a prime no";
    else
    cout<<n<<" is not a prime no";
    return 0;
}
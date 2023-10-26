/*16:Write a  program to print all Prime numbers between 1 to n. */
#include<iostream>
using namespace std;
int main()
{
    int no1,no2,i,j;
    cout<<"enter bigining and ending no:";
    cin>>no1>>no2;
    for( i=no1;i<=no2;i++)
    {
        for( j=2;j<i;j++)
        {
            if(i%j==0)
            break;
        }
        if(i==j)
        cout<<j<<"  ";
    }
}
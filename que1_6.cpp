/* Write a program, which accepts annual basic salary of an employee and calculates and displays the 
Income tax as per the following rules. 
Basic: < 1, 50,000 Tax = 0
 1, 50,000 to 3,00,000 Tax = 20% 
 > 3,00,000 Tax = 30%
 */

#include<iostream>
using namespace std;
int main()
{
    float salary,tax;
    cout<<"enter salary=";
    cin>>salary;
    if(salary<=50000)
    {
        cout<<"salary="<<salary<<endl;
        cout<<"tax="<<0*salary<<endl;
    }
    else if(salary>50000 && salary<=300000)
    {
        tax=0.20*salary;
        cout<<"tax="<<tax<<endl;
    }
    else if(salary>300000)
    {
        tax=0.3*salary;
        cout<<"tax="<<tax<<endl;
    }
}

/*Write a program, which accepts two integers and an operator as a character (+ - * / ), performs the 
corresponding operation and displays the result.*/
#include<iostream>
using namespace std;
int main()
{
	int ch;
	float a,b,result;
	do{
			cout<<"1.add  2.sub  3.mul  4.div  5.exit::";
			cin>>ch;
			
			switch (ch)
			{
				case 1:
				cout<<"enter a,b::";
				cin>>a>>b;
				result=a+b;
				cout<<"sum="<<result<<endl;
				break;
				
				case 2:
					cout<<"enter a,b::";
					cin>>a>>b;
					result=a-b;
					cout<<"sub="<<result<<endl;
					break;
					
				case 3:
					cout<<"enter a,b::";
			 		cin>>a>>b;
					result=a*b;
					cout<<"mul="<<result<<endl;
					break;
				
				case 4:
					cout<<"enter a,b::";
					cin>>a>>b;
					result=a/b;
					cout<<"div="<<result<<endl;
					break;
					
				default:
					cout<<"invalid choice"<<endl;
				
			}
   }while(ch!=5);
   return 0;
}

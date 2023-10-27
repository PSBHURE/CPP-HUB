/*Create menu driven program for Pizza Shop.And display total amount,*/
#include<iostream>
using namespace std;
int main()
{
	int choice,no,total_bill=0;
	do{
		cout<<"1.margrita=200  2.onion=70  3.mixveg=150  4.pasta=50  5.exit::";
		cin>>choice;
		switch (choice)
		{
			case 1:
				cout<<"no of margrita=";
				cin>>no;
				total_bill=total_bill+200*no;
				break;
			case 2:
				cout<<"no of onion=";
				cin>>no;
				total_bill=total_bill+70*no;
				break;
			case 3:
				cout<<"no of mixveg=";
				cin>>no;
				total_bill=150*no+total_bill;
				break;
			case 4:
				cout<<"no of pasta=";
				cin>>no;
				total_bill=50*no+total_bill;
				break;
			default:
				cout<<"invalid choice ,please enter valid choice";
				
		}
      }while(choice!=5);
      cout<<"TOTAL BILL="<<total_bill;
}

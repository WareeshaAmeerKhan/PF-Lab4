#include<iostream>
using namespace std;
void calculatePayableAmount(string day,int purchase);
main()
{
string day;
int purchase;
  while(true)
	{
	 cout<<"Enter the day of purchase: ";
	 cin>>day;
	 cout<<"Enter the total purchase amount: $";
	 cin>>purchase;
	calculatePayableAmount(day,purchase);
	}
}
void calculatePayableAmount(string day,int purchase)
{
int discount,payable_amount;
if (day=="Sunday")
	{
	 discount=0.1*purchase;
	 payable_amount=purchase-discount;
	 cout<<"Payable Amount: $"<<payable_amount<<endl;
	}
if (day!="Sunday")
	{
	 discount=0.05*purchase;
	 payable_amount=purchase-discount;
	 cout<<"Payable Amount: $"<<payable_amount<<endl;
	}
}
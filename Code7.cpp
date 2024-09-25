#include<iostream>
using namespace std;
void evenORodd(int number);
main()
{
int number;
cout<<"Enter a number: ";
cin>>number;
evenORodd(number);
}
void evenORodd(int number)
{
if (number%2==0)
	cout<<"Number "<<number<<" is even";
if (number%2!=0)
	cout<<"Number "<<number<<" is odd";
}
#include<iostream>
using namespace std;
void NAME(string name);
main()
{
string name;
cout<<"Enter your name: ";
cin>>name;
NAME(name);
}
void NAME(string name)
{
  while(true)
  {
	cout<<"Your name is: "<<name<<endl;
  }
}

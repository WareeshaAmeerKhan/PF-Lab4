#include<iostream>
using namespace std;
void calculateFuel(float distance);
main()
{
float distance;
cout<<"Enter the distance: ";
cin>>distance;
calculateFuel(distance);
}
void calculateFuel(float distance)
{
float fuel;
fuel=distance*10;
if (fuel>=100)
	{
	 cout<<"Fuel needed: "<<fuel;
	}
if (fuel<100)
	{
	 fuel=100;
	 cout<<"Fuel needed: "<<fuel;
	}
}
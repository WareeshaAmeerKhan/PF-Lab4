#include<iostream>
using namespace std;

void addition(float num1,float num2);
void subtraction(float num1,float num2);
void multiplication(float num1,float num2);
void division(float num1,float num2);

main()
{
float num1,num2;
char op;
cout<<"Enter 1st number: ";
cin>>num1;
cout<<"Enter 2nd number: ";
cin>>num2;
cout<<"Enter an operator (+,-,*,/): ";
cin>>op;
if (op=='+')
       addition(num1,num2);
if (op=='-')
       subtraction(num1,num2);
if (op=='*')
       multiplication(num1,num2);
if (op=='/')
       division(num1,num2);
}

void addition(float num1,float num2)
{
float add;
add=num1+num2;
cout<<"Addition: "<<add;
}

void subtraction(float num1,float num2)
{
float sub;
sub=num1-num2;
cout<<"Subtraction: "<<sub;
}

void multiplication(float num1,float num2)
{
float mul;
mul=num1*num2;
cout<<"Multiplication: "<<mul;
}

void division(float num1,float num2)
{
float div;
div=num1/num2;
cout<<"Division: "<<div;
}
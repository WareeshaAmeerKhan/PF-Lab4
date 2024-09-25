#include<iostream>
using namespace std;
void howManyStickers(int length);
main()
{
int length;
cout<<"Enter the side lenght of the Rubik's cube: ";
cin>>length;
howManyStickers(length);
}
void howManyStickers(int length)
{
int stickers;
stickers=(length*length)*6;
cout<<"Number of Stickers needed: "<<stickers;
}
#include<iostream>
using namespace std;
main()
{
int personage,timesofMove,average;
cout<<"Enter person's age: ";
cin>>personage;
cout<<"Enter no. of times they've moved: ";
cin>>timesofMove;
average=personage/(timesofMove+1);
cout<<"Average no. of years lived in the same house: "<<average;
}
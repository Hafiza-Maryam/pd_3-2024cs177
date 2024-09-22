#include<iostream>
using namespace std;
main()
{
string name;
float weight,days;
cout<<"enter your name:";
cin>>name;
cout<<"enter target weight lose:";
cin>>weight;
days=weight*15;
cout<<name<<" require "<<days<<" to lose "<<weight<<" kilo weight according to doctor's suggestions";
}
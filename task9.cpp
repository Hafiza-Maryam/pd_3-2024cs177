#include<iostream>
using namespace std;
main()
{
int num,a,b,c,e,sum;
cout<<"enter 4-digit numbers: ";
cin>>num;
a=num/1000;
num=num%1000;
b=num/100;
num=num%100;
c=num/10;
e=num%10;
sum=a+b+c+e;
cout<<"Sum of numbers is: "<<sum;
}
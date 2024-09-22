#include<iostream>
using namespace std;
main()
{
string name;
float adult,child,adult_tic_sold,child_tic_sold,per_charity,total,charity,remain;
cout<<"enter movie name: ";
cin>>name;
cout<<"enter adult ticket cost: $";
cin>>adult;
cout<<"enter child ticket cost: $";
cin>>child;
cout<<"enter number of child tickets sold: ";
cin>>child_tic_sold;
cout<<"enter number of adult tickets sold: ";
cin>>adult_tic_sold;
cout<<"enter percentage of amount to be denoted to charity:";
cin>>per_charity;
total=(child*(child_tic_sold))+(adult*(adult_tic_sold));
charity=total*(per_charity/100);
remain=total-charity;
cout<<"name: "<<name<<endl;
cout<<"total amount generated from ticket sales: $"<<total<<endl;
cout<<"donation to charity(10%): $"<<charity<<endl;
cout<<"remaining amount after donation: $"<<remain<<endl;
}
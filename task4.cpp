#include<iostream>
using namespace std;
main()
{
float imp_count,play_count,chances;
cout<<"enter imposter count:";
cin>>imp_count;
cout<<"enter player count:";
cin>>play_count;
chances=(imp_count/play_count)*100;
cout<<"chance of bein an imposter: "<<chances<<"%";
}
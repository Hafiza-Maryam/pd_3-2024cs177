#include<iostream>
using namespace std;
main()
{
float size,cost,area,cost_pound,cost_area;
cout<<"enter the size of fertilizer bag in pounds: ";
cin>>size;
cout<<"enter the cost of fertilizer bag: $";
cin>>cost;
cout<<"enter the area covered by fertilizer bag: ";
cin>>area;
cost_pound=cost/size;
cost_area=cost/area;
cout<<"cost of fertilizer per pounds: $"<<cost_pound<<endl;
cout<<"cost of fertilizer per square foot: $"<<cost_area;
}
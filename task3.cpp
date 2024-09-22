#include<iostream>
using namespace std;
main()
{
float initial_vel,final_vel,acc,time;
cout<<"enter initial velocity(m/s): ";
cin>>initial_vel;
cout<<"enter acceleration(m/s^2): ";
cin>>acc;
cout<<"enter time(sec): ";
cin>>time;
final_vel=initial_vel+acc*time;
cout<<"final velocity(m/s): "<<final_vel;

}
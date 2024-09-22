#include<iostream>
using namespace std;
main()
{
float num_of_frames,min,frame_per_sec;
cout<<"enter frames per sec:";
cin>>frame_per_sec;
cout<<"enter no. of min:";
cin>>min;
num_of_frames=frame_per_sec*min*60;
cout<<"total num_of_frames: "<<num_of_frames;
}
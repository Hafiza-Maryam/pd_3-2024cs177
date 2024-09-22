#include<iostream>
using namespace std;
main()
{
int squareMeter,height,width,numofWalls,area;
cout<<"Number of square meters you can paint: ";
cin>>squareMeter;
cout<<"Enter height of wall (meters): ";
cin>>height;
cout<<"Enter width of wall (meters): ";
cin>>width;
area=height*width;
numofWalls=squareMeter/area;
cout<<"Total no. of walls you can print: "<<numofWalls;
}
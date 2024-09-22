#include<iostream>
using namespace std;
main()
{
float vegePrice,fruiPrice,earn,rps;
int totalVege,totalFrui;
cout<<"Enter vegetable price per kilogram (in coins): ";
cin>>vegePrice;
cout<<"Enter fruit price per kilogram (in coins): ";
cin>>fruiPrice;
cout<<"Total kilograms of vegetables: ";
cin>>totalVege;
cout<<"Total kilograms of fruits: ";
cin>>totalFrui;
rps=1.94;
earn=(vegePrice*totalVege/rps)+(fruiPrice*totalFrui/rps);
cout<<"Total earning in Rupees (Rps): "<<earn;
}


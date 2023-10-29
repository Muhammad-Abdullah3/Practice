#include<iostream>
using namespace std;
int main()
{
	//Initializing pi, angle in radians and angle in degrees
	float pi=3.14159,ang_deg = 0,ang_rad=0;
	cout<<"Enter angle measure in degrees: ";
	cin>>ang_deg;
	//calculating angle in radians
	ang_rad = ang_deg*pi;
	ang_rad = ang_rad/180;
	//Displaying the result
	cout<<"\n"<<ang_deg<<" degrees in radian measure = "<<ang_rad<<" radians"<<endl;
	return 0;
}
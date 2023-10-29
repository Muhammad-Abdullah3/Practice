#include<iostream>
using namespace std;
int main()
{
	//Declaring 3 float type variables
	float rad,area,circum;
	//Storing PI = 3.14
	float pi = 3.14159;
	cout<<"Enter radius of the circle: ";
	cin>>rad;
	//Calculating and Storing result of area and circumference
	area = (rad*rad)*pi;
	circum = 2*pi*rad;
	//Printing on Console
	cout<<"Area of Circle = "<<area<<endl;
	cout<<"Circumference of Circle = "<<circum<<endl;
	return 0;
}
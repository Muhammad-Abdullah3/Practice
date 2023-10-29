#include<iostream>
using namespace std;
int main()
{
	//Declaring a variable for temperature input
	float temp;
	//Result and pi variable 
	float res;
	float pi = 3.14159;
	cout<<"Enter Temperature in celsius: ";
	cin>>temp;
	res = (3.0/4.0)*pi;
	res = res*temp;
	res = res*(temp-2.0)/4.0;
	cout<<"Result of computation from given formula = "<<res;
	return 0;
}
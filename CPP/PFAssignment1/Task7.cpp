#include<iostream>
using namespace std;
int main()
{
	//Declaring variables for diameter,area,total slices and radius 
	float dia,tot_sli,rad,sli_ar,area;
	float pi = 3.14159;
	sli_ar = 14.125;
	//Getting diameter as input
	cout<<"Enter diameter of Pizza in inches: \a";
	cin>>dia;
	//Calculating and storing Area, radius and total slices
	rad = dia/2;
	area = pi*(rad*rad);
	tot_sli = area/sli_ar;
	//Displaying the output
	cout<<"Total number of Slices in the Pizza are: "<<tot_sli<<"\a";
	return 0;
}
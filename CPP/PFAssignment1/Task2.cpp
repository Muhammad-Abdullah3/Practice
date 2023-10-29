#include<iostream>
using namespace std;
int main()
{
	//Declaring 3 floats for purchase amount, GST and Total amount
	float p_amo,gst,tot_amo;
	cout<<"Enter Purchase amount of product: ";
	cin>>p_amo;
	//Calculating and storing gst
	gst = (p_amo/100)*16;
	//Calculating and storing total
	tot_amo = p_amo+gst;
	//Printing on Console
	cout<<"Actual purchase amount after tax inclusion = "<<tot_amo<<endl;
	return 0;
}
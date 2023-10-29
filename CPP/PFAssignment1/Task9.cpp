#include<iostream>
using namespace std;
int main()
{
	//Declaring 3 integers
	int in1,in2,in3;
	//Getting input of three integers
	cout<<"Enter 3 integers: ";
	cin>>in1>>in2>>in3;
	//Conditions
	if (in1==in2&&in2==in3)
	{
		cout<<"All values are same.";
	}
	else if (in1!=in2&&in1!=in3&&in2!=in3)
	{
		cout<<"All values are different.";
	}
	else
	{
		cout<<"Exactly two are same.";
	}
	return 0;
}
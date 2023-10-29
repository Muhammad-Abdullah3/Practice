#include<iostream>
using namespace std;
int main()
{
	//initializing a variable
	int grad_ch = 0;
	//Getting input of number
	cout<<"Enter an integer between 0 and 100: ";
	cin>>grad_ch;
	//condition
	if (grad_ch>=85&&grad_ch<=100)
	{
		cout<<"Congratulations! you have got an A+.";
	}
	else if (grad_ch>=0&&grad_ch<85)
	{
		cout<<"Sorry, you have not got an A+.";
	}
	else
	{
		cout<<"Invalid input.";
	}
	return 0;
}
#include<iostream>
using namespace std;
int main()
{
	//program to find if given number is a prime.
	// Declaring a variable
	int num;
	cout<<"Enter a number greater than 1 and smaller than 100: ";
	cin>>num;
	//if statement to check if number is prime
	if (((num>=2)&&(num<=100))&&(num==2||num==3||num==5||num==7||num==11||num==13||num==17||num==19||num==23||num==29||num==31||num==37||num==41||num==43||num==47||num==53||num==59||num==61||num==67||num==71||num==73||num==79||num==83||num==89||num==97))
	{
		cout<<num<<" is a prime number."<<endl;
		cout<<"Number given is greater than 1 and less than 100";
	}
	else
	{
		if(num<2&&num>100)
			cout<<"Number entered was either smaller than 2 or greater than 100.";
		else
			cout<<"Number entered is not a prime number.";
	}
	return 0;
}
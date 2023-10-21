#include<iostream>
using namespace std;
int main()
 {
 	int op1,op2;
 	char operand;
 	cout<<"Enter two number and an operator: \a";
 	cin>>op1>>op2>>operand;
 	if(operand=='+')
 	{ 
 		int sum = op1+op2;
 		cout<<"Sum of the given numbers="<<sum<<endl;
 	}
 	else if (operand=='-')
 	{
		int diff = op1-op2;
 		cout<<"Difference of the given numbers="<<diff<<endl;
	}
	else if(operand=='*')
	{
	
 		int prod = op1*op2;
 		cout<<"Product of the given numbers="<<prod<<endl;
 	}
	else if (operand=='/')
	{
		float div_result = op1/op2;
 		cout<<"Resul of division of the given numbers="<<div_result<<endl;
 	}
 	else
 	{
 		cout<<"Invalid operand.";
	 }
 	return 0;
 }
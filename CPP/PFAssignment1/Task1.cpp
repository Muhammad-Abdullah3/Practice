#include<iostream>
using namespace std;
int main()
{
	//Declaring 5 integer type variables
	int f_num,s_num,t_num,fo_num,fi_num;
	//Declaring variable to store num of an integer data type
	int sum_res;
	//Declaring variable average of data type float
	float avg_res;
	cout<<"Enter five integer values: ";
	cin>>f_num>>s_num>>t_num>>fo_num>>fi_num;
	//Storing result of summition and average in respective variables
	sum_res = f_num+s_num+t_num+fo_num+fi_num;
	avg_res = sum_res/5;
	//Printing on Console
	cout<<"Sum of all 5 entered integers = "<<sum_res<<endl;
	cout<<"Average of all 5 entered integers = "<<avg_res<<endl;
	return 0;
}
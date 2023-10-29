#include<iostream>
using namespace std;
int main()
{
	//Declaring variables for hours and base pay,overtime,pay rates and regular pay
	float hrs_wor,base,hr_prate,ove_prate,reg_pay,ov_pay,tot_pay,ov_hrs;
	ov_hrs = 0;
	hr_prate = 18.25;
	ove_prate = 27.78;
	//Getting input of hour worked and base pay from user
	cout<<"Enter total hours worked by employee in the week. Hours worked should not be in negative and not greater than 80: ";
	cin>>hrs_wor;
	cout<<"\nEnter hourly pay of the employee in Dollars: ";
	cin>>base;
	//Using Conditions
	if (hrs_wor>=0 && hrs_wor<=40)
	{
		reg_pay =hr_prate*hrs_wor;
		ov_pay = 0;
		tot_pay = reg_pay+ov_pay;
		cout<<"\nRegular Pay of the week for employee on basis of hour worked is: $"<<reg_pay<<endl;
		cout<<"Over time pay of the week on basis of hour worked is: $"<<ov_pay<<endl;
		cout<<"Total pay of the week on basis of hour worked is: $"<<tot_pay<<endl; 
	}
	else if (hrs_wor>40&&hrs_wor<=80)
	{
		reg_pay = hr_prate*40.0;
		ov_hrs = hrs_wor-40.0;
		ov_pay = ove_prate*ov_hrs;
		tot_pay = reg_pay+ov_pay;
		cout<<"\nRegular Pay of the week for employee on basis of hour worked is: $"<<reg_pay<<endl;
		cout<<"Over time pay of the week on basis of hour worked is: $"<<ov_pay<<endl;
		cout<<"Total pay of the week on basis of hour worked is: $"<<tot_pay<<endl; 
	}
	else if(hrs_wor<0)
	{
		cout<<"You have entered hours in negative which is invalid.";
	}
	else
	{
		cout<<"You have entered value of hours that exceeds hours in a week. The value is invalid.";
	}
	return 0;
}
#include<iostream>
using namespace std;
int main()
 {
 	int obt_mar;
 	cout<<"Enter marks for student: \a";
 	cin>>obt_mar;
 	if(obt_mar>=90&&obt_mar<=100)
 	{ 
 		cout<<"Grade:\tA";
 	}
 	else if(obt_mar>=80&&obt_mar<90)
 	{ 
 		cout<<"Grade:\tB";
 	}
	else if(obt_mar>=70&&obt_mar<80)
 	{ 
 		cout<<"Grade:\tC";
 	}
	else if(obt_mar>=60&&obt_mar<70)
 	{ 
 		cout<<"Grade:\tD";
 	}
 	else if(obt_mar<60&&obt_mar>=0)
 	{ 
 		cout<<"Fail";
 	}
 	else
 	{
 		cout<<"Invalid input.";
	 }
 	return 0;
 }
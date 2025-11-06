//Input age and print whether user is child, teenager, adult, or senior.
#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"Enter Your Age:";
	cin>>age;
	if(age>13 && age<=18)
	{
	cout<<"Your Are teenager";	
	}
else	if(age<13)
	{
		cout<<"Your Child";
	}
	else if(age>18 && age<=59)
	{
		cout<<"Your Adult";
	}
	else if(age>=60)
	{
		cout<<"Your Senior Citizen";
	}
	else
	{
		cout<<"Wrong Input";
	}
	return 0;
}


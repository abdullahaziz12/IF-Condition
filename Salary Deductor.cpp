#include<iostream>
using namespace std;
int main()
{
	int salary,deduction;
	cout<<"Enter Your Salary:";
	cin>>salary;
		if(salary>=20000)
	{
		deduction=(salary/100)*7;
	salary=salary-deduction;
cout<<"Salary after Deduction of 7% = "<<salary;
	}
else	if(salary<20000 && salary==10000)
{
		deduction=salary-1000;
	salary=deduction;
	cout<<"Salary after Deduction of 1000 = "<<salary;
}
else if(salary<10000)
	{
		salary=salary;
cout<<"Salary after Deduction 0% = "<<salary;
	}
else
{
	cout<<"invalid";
}
return 0;
}

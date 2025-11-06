//Input a number and check if it’s positive, negative, or zero
#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter Your Number:";
	cin>>num;
	if(num>0)
	{
		cout<<"Number is Positive";
	}
	else if(num==0)
	{
		cout<<"Number is zero";
	}
	else if(num<0)
	{
		cout<<"Number is Negative";
	}
	else
	{
		cout<<"Invalid input";
	}
	return 0;
}

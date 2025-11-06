#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter your First Number:";
	cin>>a;
	cout<<"Enter Your Second Number:";
	cin>>b;
	if((a%b)==0)
	{
		cout<<"Number is Even";
	}
	else
	{
		cout<<"Number is odd";
	}
	return 0;
}

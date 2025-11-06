#include<iostream>
using namespace std;
int main()
{
	int n,a;
	cout<<"Enter Your Number:";
	cin>>n;
	cout<<"Enter your Number:";
	cin>>a;
	if(n%a==0)
	{
		cout<<"Divisible by "<<a;
	}
	else
	{
		cout<<"not divisible by "<<a;
	}
	return 0;
}

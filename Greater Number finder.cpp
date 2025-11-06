#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter your First Number:";
	cin>>a;
	cout<<"Enter Your Second Number:";
	cin>>b;
		cout<<"Enter Your Third Number:";
	cin>>c;
	if(a>b && a>c)
	{
		cout<<a;
	}
	else if(a>b && a>c)
	{
		cout<<b;
	}
	else 	if(c>b && c>a)
	{
		cout<<c;
	}
	return 0;
}

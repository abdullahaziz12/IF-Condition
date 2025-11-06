#include<iostream>
using namespace std;
int main()
{
	int a,b,c,largest,smallest;
	cout<<"Enter your First Number:";
	cin>>a;
	cout<<"Enter Your Second Number:";
	cin>>b;
		cout<<"Enter Your Third Number:";
	cin>>c;
	if(a>b && a>c)
	largest=a;
	else if(a>b && a>c)
	largest=b;
	else 	if(c>b && c>a)
	largest=c;
	if(a<b && a<c)
	smallest=a;
	else 	if(b<a && b<c)
	smallest =b;
	else 	if(c<a && c<b)
		smallest =c;
		cout<<"Largest Number is "<<largest<<endl;
		cout<<"Smallest Number is "<<smallest <<endl;
		return 0;
	}

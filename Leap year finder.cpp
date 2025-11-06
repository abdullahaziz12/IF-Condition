//Input a year and check if it’s a leap year or not.
#include<iostream>
using namespace std;
int main()
{
	int leapyear;
	cout<<"Enter Year:";
	cin>>leapyear;
	if(leapyear%4==0 && leapyear%400 )
	{
		cout<<"Leapyear";
	}
	else
	{
		cout<<"Not a Leapyear";
	}
	
}

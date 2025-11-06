#include<iostream>
using namespace std;
int main()
{
	int subject1,subject2,subject3;
	cout<<"Enter your Number of Subject 1:";
	cin>>subject1;
	cout<<"Enter your Number of Subject 2:";
	cin>>subject2;
		cout<<"Enter your Number of Subject 3:";
	cin>>subject3;
	if((subject1+subject2+subject3)/3>=80)
	{
		cout<<"Admission Granted";
	}
		else
	{
		cout<<"Try Again";
	}
	return 0;
}

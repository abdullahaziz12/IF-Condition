//Input triangle sides — check if it’s equilateral, isosceles, or scalene.
#include<iostream>
using namespace std;
int main()
{
float side1,side2,side3,angle1,angle2,angle3;
cout<<"Enter Length Of First Side:";
cin>>side1;
cout<<"Enter Length Of Second Side:";
cin>>side2;
cout<<"Enter Length Of Third Side:";
cin>>side3;
cout<<"Enter Angle Of First Side:";
cin>>angle1;
cout<<"Enter Angle Of Second Side:";
cin>>angle2;
cout<<"Enter Angle Of Third Side:";
cin>>angle3;
if(side1==side2 && side2==side3 && angle1==angle2 && angle2==angle3)
{
	cout<<"Triangle is equilateral";
}
else if(side1==side2 && side2!=side3 && angle1==angle2 && angle2!=angle3)
{
	cout<<"Triangle is Isosceles";
}
else if(side1!=side2 && side2!=side3 && angle1!=angle2 && angle2!=angle3)
{
	cout<<"Triangle is Scalene";
}
else
{
	cout<<"Wrong input";
}
return 0;
}

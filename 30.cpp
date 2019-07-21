#include<iostream>
using namespace std;
int main()
{
	int grade;
	cout<<"Enter grade ";
	cin>>grade;
	if(grade>=60)
	{
		cout<<"FIRST";
	}
	else if(grade>=50 and grade<60)
	{
		cout<<"SECOND";
	}
	else if(grade>=40 and grade<50)
	{
		cout<<"THIRD";
	}
	else
	cout<<"FAILED";
	return 0;
}

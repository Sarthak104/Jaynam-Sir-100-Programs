#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char s1[10],s2[10];
	cin>>s1>>s2;
	int value;
	value=strcmp(s1,s2);
	if(value==0)
	{
		cout<<"Strings are equal";
	}
	else
	cout<<"Strings are not equal";
	return 0;
}

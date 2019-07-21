#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string a;
	cin>>a;
	for(int i=0;i<a.size();i++)
	{
		if(a[i]>='A' and a[i]<='Z')
		{
			a[i]=a[i]+32;
		}
		else
		a[i]=a[i]-32;
	}
	cout<<a;
	return 0;
}

#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int flag=1;
	if(n<=1)
	{
		cout<<"Not a prime no.";
	}
	flag=0;
	for(int i=2;i<n/2;i++)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		cout<<"Prime no.";
	}
	else if(flag==1)
	{
		cout<<"Not a prime no.";
	}
	return 0;
}

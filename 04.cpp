#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int first=0;
	int second=1;
	int third=0;
	for(int i=1;i<=n;i++)
	{
	if(i==1)
	{
		cout<<first;
	}
	else if(i==2)
	{
		cout<<second;
	}
	else if(i>2)
	{
			third=first+second;
			first=second;
			second=third;
			cout<<third;
	}
	}
	return 0;
}

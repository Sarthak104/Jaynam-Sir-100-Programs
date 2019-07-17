#include<iostream>
using namespace std;
void fibo(int a)
{
	int first=0;
	int second=1;
	int third=0;
	for(int i=1;i<=a;i++)
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
}
int main()
{
	int n;
	cin>>n;
	fibo(n);
	return 0;
}

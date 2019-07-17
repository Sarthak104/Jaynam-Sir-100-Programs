#include<iostream>
using namespace std;
void GCD(int a,int b)
{
int temp;
	for(int i=1;i<=a || i<=b;i++)
	{
		if(a%i==0 && b%i==0)
			temp=i;
	}
	cout<<temp;
	}
int main()
{
	int a,b;
	cin>>a>>b;
	GCD(a,b);
	return 0;
}

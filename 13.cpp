#include<iostream>
using namespace std;
int main()
{
	int a=10,b=30;
	int temp;
	for(int i=1;i<=a || i<=b;i++)
	{
		if(a%i==0 && b%i==0)
			temp=i;
	}
	cout<<temp;
	return 0;
}

#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int temp;
	while(n!=0)
	{
		temp=n%10;
		n=n/10;
cout<<temp;		
}
	return 0;
}

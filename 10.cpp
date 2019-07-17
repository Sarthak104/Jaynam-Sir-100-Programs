#include<iostream>
using namespace std;
void value(int c,int d)
{
	int temp;
	temp=c;
	c=d;
	d=temp;
	cout<<c<<endl<<d;
}
int main()
{
	int a,b;
	cin>>a>>b;
	value(a,b);
	cout<<a<<b;
	return 0;
}

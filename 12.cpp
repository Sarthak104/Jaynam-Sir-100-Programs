#include<iostream>
#include<math.h>
using namespace std;
void power(int c,int d)
{
	int P;
	P=pow(c,d);
	cout<<P;
}
int main()
{
	int a,b;
	cin>>a>>b;
	power(a,b);
	return 0;
}

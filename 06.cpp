#include<iostream>
using namespace std;
void fac(int a)
{
	int fact=1;
	for(int i=1; i<=a; i++)
    {
      fact = fact * i;
	}
   cout<<fact;
}
int main() 
{
   int n,i;
   cin>>n;
   fac(n);
}

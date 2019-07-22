#include<iostream>
using namespace std;
int main() 
{
	int i,j,t,k=1;
	printf("Enter rows ");
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<k;
			k++;
		}
		cout<<endl;
	}
	return 0;
}

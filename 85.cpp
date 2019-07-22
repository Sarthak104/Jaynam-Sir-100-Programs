#include<iostream>
using namespace std;
int main()
{
int n;
scanf("%d",&n);
int arr[n],nar[n];
for(int i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);
	}
	int count=0,k;
	for(int j=0;j<n;j++)
	{
		for(k=0;k<count;k++)
		{
			if(arr[j]==nar[k])
			break;
		}
		if(k==count)
		{
			nar[k]=arr[j];
			count++;
		}
	}
	for(int q=0;q<count;q++)
	{
		printf("%d", nar[q]);
	}
	return 0;
}

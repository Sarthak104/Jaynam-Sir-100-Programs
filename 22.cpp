#include<iostream>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int a=0;a<n;a++)
	{
		scanf("%d",&arr[a]);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
		int temp;
		 if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	
	for(int s=0;s<n;s++)
	{
		printf("%d",arr[s]);
	}
	return 0;
}

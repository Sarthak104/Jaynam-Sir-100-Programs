#include<iostream>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int lar;
	lar=arr[0];
	for(int i=1;i<n;i++)
	{
		if(lar<arr[i])
		{
			lar=arr[i];
			
		}
	}
	printf("%d",lar	);
	return 0;
}

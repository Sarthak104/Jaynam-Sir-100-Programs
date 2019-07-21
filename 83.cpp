#include<iostream>
using namespace std;
int main()
{
	int n;
	printf("Enter size of array ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter array elements ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int lar,sec;
	lar=arr[0];
	for(int i=1;i<n;i++)
	{
		if(lar<arr[i])
		{
			sec=lar;
			lar=arr[i];
		}
	}
	printf("The second largest element in the array is %d",sec);
	return 0;
}

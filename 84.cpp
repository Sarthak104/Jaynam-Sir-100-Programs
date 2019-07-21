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
	int small,sec;
	small=arr[0];
	for(int i=1;i<n;i++)
	{
		if(small>arr[i])
		{
			sec=small;
			small=arr[i];
		}
	}
	printf("The second smallest element in the array is %d",sec);
	return 0;
}

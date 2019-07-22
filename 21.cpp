#include<iostream>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n],first=0,last=n-1;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int num,middle;
	scanf("%d",&num);
	while(first<=last)
	{
		middle=(first+last)/2;
		if(num==arr[middle])
		{
			printf("Number found ");
			break;
		}
		else if(num<arr[middle])
		{
			last=middle-1;
		}
		else 
		first=middle+1;
	}
	if(first>last)
	cout<<"Number not found ";
	return 0;
}

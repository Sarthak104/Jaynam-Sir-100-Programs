#include<iostream>
using namespace std;
int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int p;
	scanf("%d",&p);
	for(int i=p;i<10;i++)
	{
		arr[i]=arr[i+1];
	}
	for(int i=0;i<10-1;i++)
	{
		printf("%d",arr[i]);
	}
	return 0;
}

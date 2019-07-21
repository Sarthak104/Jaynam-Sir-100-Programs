#include<iostream>
using namespace std;
int main()
{
	int n;
	printf("Enter size of array ");
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int lar,small;
	lar=arr[0];
	for(int i=1;i<n;i++)
	{
		if(lar<arr[i])
		{
			lar=arr[i];
		}
	}
	cout<<"largest number in the array is "<<lar;
	small=arr[0];
	for(int i=1;i<n;i++)
	{
		if(small>arr[i])
		{
			small=arr[i];
		}
	}
	cout<<endl<<"smallest element in array is "<<small;
	return 0;
}

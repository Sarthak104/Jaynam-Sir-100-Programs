#include<iostream>
using namespace std;
int main()
{
	int s;
	cout<<"Enter size of array ";
	cin>>s;
	int arr[s];
	cout<<"Enter array elements";
	for(int i=0;i<s;i++)
	{
		cin>>arr[i];
	}
	int n;
	cout<<"Enter element to be searched ";
	cin>>n;
	int flag=0;
	for(int i=0;i<s;i++)
	{
		if(n==arr[i])
		{
			cout<<"Element found at "<<i+1<<" position ";
			flag=1; 
		}	
	}
	if(flag==0)
	{
		cout<<"Element not present";
	}
	return 0;
}

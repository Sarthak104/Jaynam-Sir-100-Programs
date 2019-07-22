#include<iostream>
using namespace std;
int main()
{
	int r,c,mat1[10][10],mat2[10][10],sum[10][10];
	cout<<"Enter rows and columns ";
	cin>>r>>c;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cin>>mat1[i][j];
		}
	}
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cin>>mat2[i][j];
		}
	}
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			sum[i][j]=mat1[i][j]+mat2[i][j];
			cout<<sum[i][j]<<"\t";
		}
	}
	return 0;
}

#include<iostream>
using namespace std;
int main() 
{
   int no,temp,sum;
   scanf("%d",&no);
   temp=no;
   while(no!=0)
   	{
   	int fact=1,ind=0;
   	ind=no%10;
   for(int i=1;i<=ind;i++)
   	{
      fact=fact*i;
	}
	sum=sum+fact;	
	no=no/10;
	}
	if(sum==temp)
	{
	printf("Strong Number");
	}
	else
	printf("Not a Strong number");
   return 0;
}

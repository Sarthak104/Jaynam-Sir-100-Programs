#include<iostream>
#include<cmath>
using namespace std;
int main() 
{
	int a,b,c;
	int r1,r2;
	printf("Enter the coefficients a,b,c of the quaratic equation ");
	scanf("%d%d%d",&a,&b,&c);
	int dtm;
	dtm=b*b - 4*a*c;
	if(dtm>0)
	{
		printf("Roots are : ");
		r1=(-b + sqrt(dtm))/(2*a);
		r2=(-b - sqrt(dtm))/(2*a);
		printf("%d%d",r1,r2);
	}
	else if(dtm==0)
	{
		printf("Roots are : ");
		r1=-b/(2*a);
		r2=-b/(2*a);
		printf("%d%d",r1,r2);
	}
	else
	{
		printf("Roots are :");
		r1=-b/(2*a) + sqrt(-dtm)/(2*a);
		r2=-b/(2*a) - sqrt(-dtm)/(2*a);
		printf("%d%d",r1,r2);
	}
	return 0;
}

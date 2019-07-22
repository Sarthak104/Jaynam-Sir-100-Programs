#include<iostream>
using namespace std;
int main()
{
    int n,temp,rem,result=0;
    scanf("%d", &n);
    temp=n;
    while (temp!=0)
    {
        rem=temp%10;
        result=result+rem*rem*rem;
        temp/=10;
}
    if(result==n)
        printf("Armstrong number.");
    else
        printf("Not an Armstrong number");
return 0;
}

#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
    char str[10];
    gets(str);
    int temp;
    temp=strlen(str);
    for(int i=temp-1;i>=0;i--)
    {
            printf("%c",str[i]);
    }
    return 0;
}
    

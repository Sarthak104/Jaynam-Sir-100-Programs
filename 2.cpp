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
    char a;
    int j=1;
    int flag=0;
    for(int i=0;i<temp;)
    {
          a=str[i];
          if(a==str[temp-j])
          {
          i++;
          a=str[i];
          j++;
          }
          else 
         { flag=1;
          break;}
    }
    if(flag==1)
    cout<<"Not a Palindrome no.";
    else
    cout<<"Palindorme no.";
    return 0;
}

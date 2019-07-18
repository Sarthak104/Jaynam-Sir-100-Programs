15 (i)

#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
int main()
{
string str,newstr;
cin>>str;
int temp;
cout<<"Enter the string you want to append ";
cin>>newstr;
int n;
cin>>n;
string fstr;
fstr=str.substr(0,n)+newstr+str.substr(n,str.length() - n);
cout<<fstr;
return 0;
}

15 (ii)

#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
int main()
{
string str;
cin>>str;
int n;
cout<<"Enter the position from which the characters will be deleted: ";
cin>>n;
str.erase(n);
cout<<str;
return 0;
}

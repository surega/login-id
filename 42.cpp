#include<iostream>
#include<string.h>
using namespace std;
int main()
{
char str1[5],str2[5];
int a,b;
cin>>str1>>str2;
a=strlen(str1);
b=strlen(str2);
if(a==b)
cout<<str1;
if(a>b)
cout<<"str1 is greater";
else
cout<<"str2 is greater";
return 0;
}

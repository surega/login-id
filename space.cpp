#include<iostream>
using namespace std;
int main()
{
int count=0,i;
string str;
getline(cin,str);
for(i=1;i<=str.length();i++)
{
if(isspace(str[i]))
count++;
}
cout<<count;
return 0;
}

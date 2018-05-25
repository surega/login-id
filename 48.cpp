#include <iostream>
using namespace std;
int main()
{
int n,a[5],sum=0,i,avg;
cin>>n;
for(i=0;i<n;i++)
{
    cin>>a[i];
    sum=sum+a[i];
}
avg=sum/n;
cout<<avg;
return 0;
}

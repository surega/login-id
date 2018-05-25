#include <iostream>
using namespace std;
int main()
{
int n,a[5],i,large,small;
cin>>n;
for(i=0;i<n;i++)
{
    cin>>a[i];
}
large=a[0];
small=a[0];
for(i=1;i<n;i++)
{
    if(a[i]<small)
    small=a[i];
    if(a[i]>large)
    large=a[i];
}
cout<<small<<large;
return 0;
}

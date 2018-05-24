#include<iostream>
using namespace std;
int main()
{
    int a,b,c,n,i;
    a=0;
    b=1;
    cin>>n;
    for(i=0;i<n;++i)
    {
    if(i<=1)
    c=i;
    else
        c=a+b;
        a=b;
        b=c;
        cout<<c;
    }
    
    return 0;
}

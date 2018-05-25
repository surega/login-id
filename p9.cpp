#include<iostream>
using namespace std;
int main()
{
 int n,i,t;
 cin>>t;
 for(n=1;n<t;n++)
  {
    for(i=2;i<=n-1;i++)
      {
        if(n%i==0)
          {
            break;
          }
      }

 if(n==i)
  cout<<n;
}
    return 0;
}

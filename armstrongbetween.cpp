#include <iostream>
using namespace std;

int main()
{
  int a,b,i,n,digit,sum;
  cout<<"Enter the numbers a,b:";
  cin>>a>>b;
  for(i=a;i<=b;i++)
  {
        sum=0;
        n=i;
        for(;n>0;n/=10)
        {
            digit=n%10;
            sum=sum+(digit*digit*digit);
        }
        if(sum==i)
        {
            cout<<i<<endl;
        }
  }
  return 0;
}

#include<iostream>
#include<math.h>
int main()
{
 int n,a=0,r,q;
cout<<"Enter the number to be tested: ";
cin>>n;
 q=n;
 do
 {
      r=q%10;
      a=a+pow(r,2);
      q=q/10;
 }
 while(q%10!=0);
 cout<<a;
}

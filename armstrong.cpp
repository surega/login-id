#include <iostream>
using namespace std;

int main()
{
    int n,digit,sum=0,num;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    num=n;
    while(n!=0)
    {
        digit=n%10;
        sum=sum+(digit*digit*digit);
        n=n/10;
    }
    if(sum==num)
    {
    cout<<"armstrong";
    }
    else
    {
    cout<<"not armstrong";
    }
}

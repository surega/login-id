#include <iostream>

using namespace std;

int main()
{
    int sum=0,n,i;
    cout<<"enter the value of n";
    cin>>n;
    for(i=0;i<=n;i++)
    {
        sum=sum+i;
        cout<<"sum is="<<sum<<endl;
        cin>>sum;
    }
}

#include <iostream>

using namespace std;

int main()
{
    int i,k,N,sum=0,a[N];
    cout<<"enter the value of k,N";
    cin>>k>>N;
    for(i=0;i<=k;i++)
    {
        sum=sum+i;
        cout<<"sum is="<<sum<<endl;
        cin>>sum;
    }
}

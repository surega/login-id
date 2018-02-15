#include <iostream>

using namespace std;

int main()
{
    int n,count=0;
    cout<<"enter the value of n";
    cin>>n;
    while(n!=0)
    {
        n=n/10;
        ++count;
        cout<<"count digits"<<count<<endl;
    }
}

#include <iostream>
using namespace std;

int main()
{
    int a,b,c,i;
    cout<<"enter the value of a,b"<<endl;
    cin>>a>>b;
    while(a<b)
    {
    c=0;
    	for(i=2;i<=a/2;i++)
    	{
        if(a%i==0)
        {
        	c=1;
        	break;
        }
    }
    if(c==0)
    cout<<a<<" ";
    ++a;
    }
    return 0;
}

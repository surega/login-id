#include <iostream>
using namespace std;

int main()
{
    int n,digit,rev=0;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    do
    {
        digit=n%10;
        rev=(rev*10)+digit;
        n=n/10;
    }
    while(n!=0);
    if(n==rev)
    cout<<"palindrome";
    else
    cout<<"not palindrome";
}

#include <iostream>
using namespace std;
int main() {
	int a,b,i;
	cout<<"enter the values of a,b";
	cin>>a>>b;
	for(i=0;a<=b;i++)
{
	if(a%2==0)
	{
	cout<<a<<endl;
	}
	a=a+1;
}
	return 0;
}

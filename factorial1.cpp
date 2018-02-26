#include <iostream>
using namespace std;

int main() {
	int i,a,fact=1;
	cout<<"enter the value of a";
	cin>>a;
	for(i=1;i<=a;i++)
	{
		fact=fact*i;
	}
	cout<<"factorial ="<<fact;
	return 0;
}

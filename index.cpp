#include <iostream>
using namespace std;
 
int main() {
	int arr[5],i,n;
	cout<<"enter the number";
	cin>>n;
	cout<<"enter the elements:";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
		cout<<i<<arr[i];
	}
	return 0;
}

#include <iostream>
using namespace std;

int main() {
	int arr[10],n,i,min;
	cout<<"enter the number";
	cin>>n;
		cout<<"enter the elements";
			for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	min=arr[0];
	for(i=0;i<n;i++)
	{
		if(arr[i]<min)
		{
		min=arr[i];
		}
	}
		cout<<"minimum is:"<<min;
	return 0;
}

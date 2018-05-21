#include <iostream>
using namespace std;

int main() {
	int arr[10],n,i,j,temp;
	cout<<"enter the number";
	cin>>n;
		cout<<"enter the elements";
			for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
		if(arr[i]>arr[j])
		{
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		}
	}
	}
	
		cout<<"sorted elements:";
		for(i=0;i<n;i++)
		{
		cout<<arr[i];
		}
	return 0;
}

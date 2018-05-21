#include <iostream>
using namespace std;

int main() {
	int n,i,j,temp;
	float median,arr[10];
	cout<<"enter the number";
	cin>>n;
		cout<<"enter the elements";
			for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
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
		if(n%2==0)
		median=(arr[n/2]+arr[n/2+1])/2.0;
		else
		median=arr[n/2+1];
		for(i=0;i<n;i++)
		{
		cout<<"median element is:"<<median;
		}
	return 0;
}

#include<iostream>
using namespace std;
int main()
{
	int i,a[50],n,position;
	cout<<"Enter the value of n:";
	cin>>n;
	cout<<"Enter the array elements";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter the position want to delete:";
	cin>>position;
	for(i=position;i<n;i++)
	{
		a[i]=a[i+1];
		n--;
	}
	cout<<"Deleted array elements are:";
	for(i=0;i<n;i++)
	{
		cout<<" "<<a[i];
	}

}

#include<iostream>
using namespace std;
int main()
{
	int a[100];
	int n,i,j,temp;
	cout<<"Enter Array Size: ";
	cin>>n;
	cout<<"Enter Array Elements: "<<endl;
	for(i=0; i<n; i++)
	{
		cin>>a[i];
	}
	cout<<"Sorting: ";
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	cout<<"Sorted Array: "<<endl;
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}

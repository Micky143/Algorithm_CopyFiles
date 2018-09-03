#include<iostream>
using namespace std;
int main()
{
	int n,i,a[100],beg,mid,end,item;
	cout<<"Enter Size of Array: ";
	cin>>n;
	cout<<endl;
	cout<<"Enter Elements: "<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter element to be searched: ";
	cin>>item;
	beg=1;
	end=n;
	mid=(int)((beg+end)/2);
	while(beg<=end && a[mid!=item])
	{
		if(item<a[mid])
		end=mid-1;
		else
		beg=mid+1;
		mid=int((beg+end)/2);
	}
	if(item==a[mid])
	cout<<"Search Successful, Element found at: "<<" "<<mid;
	else
	cout<<"Search Unsuccessful, Element not found";
}

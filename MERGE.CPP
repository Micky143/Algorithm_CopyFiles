#include<iostream>
using namespace std;
void merging (int a[],int beg, int mid,int mid1,int endd)
{
    int i,k,j,c[20];
    j=mid1;
    i=k=beg;
    while(i<=mid && j<=endd)
    {
	if(a[i]<a[j])
	{
	    c[k]=a[i];
	    i=i+1;
	}
	else
	{
	    c[k]=a[j];
	    j=j+1;
	}
	k=k+1;
    }
    if(i>mid)
    {
	while(j<=endd)
	{
        c[k]=a[j];
	    j=j+1;
	    k=k+1;
    }
}
    else
    {
	while(i<=mid)
	{
	c[k]=a[i];
	i=i+1;
	k=k+1;
	}
    }
    for(k=beg;k<=endd;k++)
    {
	a[k]=c[k];
    }
}

void mergesort(int a[], int beg, int endd )
{
int mid;
if(beg<endd)
    {
	mid=int((beg+endd)/2);
	mergesort(a,beg,mid);
	mergesort(a,mid+1,endd);
	merging(a,beg,mid,mid+1,endd);
    }
}

int main()
{
    int a[20],i,beg,endd,n;
    cout<<"Enter the size:"<<" ";
    cin>>n;
    cout<<endl;
    cout<<"Enter array Elements:"<<" "<<endl;
    for(i=1;i<=n;i++)
    {
	cin>>a[i];
    }
    cout<<endl;
    endd=n;
    beg=1;
    mergesort(a,beg,endd);
    cout<<"Sorted Array:";
    for(i=1;i<=n;i++)
    {
	cout<<a[i]<<" ";
    }
}

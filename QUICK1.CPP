#include<iostream>
using namespace std;

int  quick(int a[], int beg,int endd)
{
    int right,left,loc;
    left=loc=beg;
    right=endd;
    int temp;
    while(1)
    {
	while(a[loc]<=a[right] & loc!=right)
	{
	    right=right-1;
	}
	if(loc==right)
	{
	    return(loc);
	}

	if(a[loc]>a[right])
	{

	    temp=a[loc];
	    a[loc]=a[right];
	    a[right]=temp;

	    loc=right;
	}
	while(a[left]<=a[loc] && left!=loc)
	{
	    left=left+1;
	}

	if(loc==left)
	{
	    return(loc);
	}
	if(a[left]>a[loc])
	{
	   temp=a[left];
	   a[left]=a[loc];
	   a[loc]=temp;

	   loc=left;
	}


    }

}

 void quicksort(int a[],int beg, int endd)
{

    int loc;
    if(beg<endd)
       {
	 loc=quick(a,beg,endd);
	 quicksort(a,beg,loc-1);
	 quicksort(a,loc+1,endd);
       }
}


int main()
{

    int i,a[20],n,beg,endd;
    cout<<"Enter Size of Array:"<<" ";
    cin>>n;
    cout<<endl;
    for(i=1; i<=n;i++)
    {
	cout<<"Enter Array Elements"<<" ";
	cin>>a[i];
    }
    cout<<endl;
    beg=1;
    endd=n;
    quicksort(a,beg,endd);
     cout<<"Sorted Array:"<<endl;
    for(i=1; i<=n; i++)
       {
	   cout<<a[i]<<" ";
       }
   }

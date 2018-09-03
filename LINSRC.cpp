#include<iostream> 
using namespace std;
 
int main()
{
    int a[20],n,x,i,flag=0;
    cout<<"Enter Number Of Elements: ";
    cin>>n;
    cout<<endl;
    cout<<"Enter Elements Of Array: "<<endl;
    for(i=0;i<n;i++)
    cin>>a[i];
    cout<<endl;
    
    cout<<"Enter Element To Be Searched: ";
    cin>>x;
    cout<<endl;
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            cout<<"Value Found At:"<<i<<endl;
			flag=1;
			break;
        }
    }
    if (flag==0)
       {
		 cout<<"Element not found";
    }
    return 0;
}

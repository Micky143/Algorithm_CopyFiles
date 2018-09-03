

#include<iostream>
using namespace std;
int main()
{
  
    int a[10][10], i,j,min, u,v,n,ne,mincost;
    int visited[10];
    cout<<"Enter the size ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
	for(j=1;j<=n;j++)
	{
	    cout<<"Enter the elements["<<i<<"]["<<j<<"] elements ";
	    cin>>a[i][j];
	}


    }
    for(i=1;i<=n;i++)
    {
	visited[i]=0;
    }
    for(i=1;i<=n;i++)
    {
	for(j=1;j<=n;j++)
	{
	    if(a[i][j]==0)
	    {
		a[i][j]=999;
	    }
	}
    }
    visited[1]=1;
    ne=1;
    mincost=0;
    while(ne<n)
    {
	min=999;
	for(i=1;i<=n;i++)
	{
	    for(j=1;j<=n;j++)
	    {
		 if(a[i][j]<min)
		 {
		     if(visited[i]!=0)
		     {

			min=a[i][j];
		     u=i;
		     v=j;
		 }
		 }
	    }

	}
	if(visited[u]==0 || visited[v]==0)
	{
	    cout<<"Edge "<<ne<<" "<<u<<"->"<<v<<" cost"<<" "<<min<<endl;
	    ne=ne+1;
	    mincost=mincost+min;
	    visited[v]=1;
	}
	a[u][v]=a[v][u]=999;
    }

    cout<<"Minimum cost = "<<mincost;


}

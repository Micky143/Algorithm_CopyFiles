#include <iostream>
using namespace std;
int a[10][10],i,j,min,u,v,n;
int find(int);
int uni(int, int);
int mincost=0, ne =1;
int parent[10]= {0,0,0,0,0,0,0,0,0,0};
int main()
{
    int min;
    cout<<"Enter the size ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
	for(j=1;j<=n;j++)
	{
	    cout<<"Enter the elements["<<i<<"]["<<j<<"] elements ";
	    cin>>a[i][j];
	      if(a[i][j]==0)
	      {
		  a[i][j]=999;
	      }
	}
    }

    while (ne<n)
    {
	min=999;
	for(i=1;i<=n;i++)
	{

	    for(j=1;j<=n;j++)
	    {
		if(a[i][j] <min)
		{
		min=a[i][j];
		u=i;
		v=j;
	    }
	    }
	}
	u=find( u);
	v=find( v);
	if(uni(u,v))
	{
	    cout<<"Edge "<<ne++<<" "<<u<<"->"<<v<<" cost"<<" "<<min<<endl;
	    ne=ne+1;
	    mincost=mincost+min;
	}
	a[u][v]=a[v][u]=999;
    }
    cout<<"Minimum cost = "<<mincost;
}

int find(int i)
    {
    while(parent[i])
	i=parent[i];
	return i;
    }

int uni(int i, int j)
{
    if(i!=j)
    {
	parent[j]=i;
    return 1;
    }
    return 0;
}

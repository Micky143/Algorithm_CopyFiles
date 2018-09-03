#include<iostream>
using namespace std;
int main()
{
    int n,ne=0,mincost=0,min,i,j,u,v;
    cout<<"Enter the no of nodes:";
    cin>>n;
    int ar[n][n],vi[n];
    for(i=0;i<n;i++)
        vi[i]=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<"Enter weight of path from "<<i+1<<"----->"<<j+1<<" :";
            cin>>ar[i][j];
            if(ar[i][j]<=0)
            {
                ar[i][j]=999;
            }
        }
    }
   /* cout<<endl<<"------Adjancy Matrix of Graph ------"<<endl<<endl;
    cout<<"i/j | ";
    for(i=0;i<n;i++)
    {
        cout<<i+1<<" ";
    }
    cout<<endl;
    for(i=0;i<(n*2)+5;i++)
    {
        cout<<"-";
    }
    cout<<endl;
    for(i=0;i<n;i++)
    {
        cout<<"  "<<i+1<<" | ";
        for(j=0;j<n;j++)
        {
          cout<<ar[i][j]<<" ";
        }
        cout<<endl;
    }*/
    vi[0]=1;
    cout<<endl;
    while(ne<n-1)
    {
        min=999;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {

                if(ar[i][j]<min)
                {
                    if(vi[i]!=0)
                    {


                        min=ar[i][j];

                        u=i;
                        v=j;

                    }
                }

            }

        }

      if(vi[u]==0||vi[v]==0)
            {
                cout<<"Minimum weight from "<<u+1<<"---->"<<v+1<<" : "<<min<<endl;
                mincost+=min;
                ne+=1;
                vi[v]=1;
            }
            ar[u][v]=ar[v][u]=999;
    }
    cout<<endl<<"Minimum Cost of MST is: "<<mincost<<endl;
    return 0;
    }

#include <iostream>
using namespace std;
int main()
{
    int i,j,k,D[20][20]
    ,n,a[10][10],cost,min;
   cout<<"Ente the size ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cout<<"Enter the elements["<<i<<"]["<<j<<"] elements ";
            cin>>a[i][j];
        }


    }
    for (i=1; i<=n; i++)
    {
        for(j=1; j<=n;j++)
        {
            if(a[i][j]==0)
            {
                a[i][j]=999;
            }
        }

    }
    for(k=1;k<=n;k++)
    {
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(a[i][k]+a[k][j]<a[i][j])
                {
                    a[i][j]=a[i][k]+a[k][j];
                }


            }
        }
    }
     for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {



        cout<<"\t"<<a[i][j];
        }
        cout<<endl;
    }

}

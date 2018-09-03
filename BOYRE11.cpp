#include<iostream>
#include<limits>
#include<cstring>
using namespace std;
int max(int a, int b)
{
	return(a>b)?a:b;
}

int BMoore(char P[],int m,char T[],int n)
{
int i,j,Idx[999];
for(i=0;i<=122;i++)
{
Idx[i]=m;	
}
for(j=0;j<=m-1;j++)
{
Idx[P[j]]=m-j-1;
}
i=m-1;
while(i<n)
{
	j=m-1;
	while(j>=0 && T[i]==P[j])
	{
	
	i=i-1;
	j=j-1;
}
if(j==-1)
{
	return(i+1);
}
i=i+max(Idx[T[i]],m-j);
}
return(-1);
}


int main()
{
	char p[100],t[100];
	int n,m,r;
	cout<<"Enter the Text: "<<endl;
	gets(t);
	cout<<"Enter the Pattern: "<<endl;
	gets(p);
	n=strlen(t);
	m=strlen(p);
	
	r=BMoore(p,m,t,n);
	if(r==-1)
	{
		cout<<"Pattern Not Matched"<<endl;
	}
	else
	{
		cout<<"Pattern Matched At: "<<r<<endl;
	}
	return(0);
}


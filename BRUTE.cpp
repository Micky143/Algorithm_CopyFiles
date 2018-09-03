#include<cstring>
#include<iostream>
using namespace std;

void search (char *text,char *pat)
{
	int tsize=strlen(text);
	int psize=strlen(pat);
	int i,j,len;
	len=tsize-psize;
	for(i=0;i<=len;i++)
	{
		for(j=0;j<psize;j++)
		{
			if(pat[j]!=text[i+j])
			break;
		}
		if(j==psize)
		cout<<"Pattern Found At:"<<i<<endl;
	}
}

int main()
{
	char t[200],p[200];
	cout<<"Enter Text:"<<endl;
	gets(t);
	cout<<endl;
	cout<<"Enter Pattern To Be Searched:"<<endl;
	gets(p);
	search(t,p);
	return 0;
}

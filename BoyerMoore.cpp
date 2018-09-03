#include<iostream>
#include<string>
#include<conio.h>
int BoyerMoore(char P[], int m, char T[], int n);
int max(int a,int b);
using namespace std;
int main()
{
char pattern[30], string[30];
 int loc;
 
 cout<<"Enter the sequence of characters: ";
 gets(string);
 cout<<"Enter the sequence to search: ";
 gets(pattern);
 loc=BoyerMoore(pattern,strlen(pattern),string,strlen(string));
 if(loc==-1)
 {
  cout<<"String is not available.";
 }
 else
 {
  cout<<"String is found at index:"<<loc;
 }
 getch();
 return 0;
}
int BoyerMoore(char P[], int m, char T[], int n)
{
 int i,j;

 char idx[30];
 for(i=97;i<=22;i++)
 {
  idx[i]=m;
 }
 for(j=0;j<=m-1;j++)
 {
                    idx[P[j]]=m-j-1;
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
           return i+1;
  i=i+max(idx[T[i]],m-j);
 }
 return -1;
}
int max(int a,int b)
{
    if(a>b)
           return a;
    else
           return b;
}



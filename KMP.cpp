#include<iostream>
#include<string>
#include<conio.h>
int FailureFn(char P[], int m, char F[]);
int KMPSearch(char P[], int m, char T[], int n);
using namespace std;
int main()
{
char pattern[30], string[30];
 int loc;

 cout<<"Enter the sequence of characters: ";
 gets(string);
 cout<<"Enter the sequence to search: ";
 gets(pattern);
 loc=KMPSearch(pattern,strlen(pattern),string,strlen(string));
 if(res==-1)
 {
  cout<<"String is not available.";
 }
 else
 {
  cout<<"String is found at inex:"<<res;
 }
 getch();
 return 0;
}
int KMPSearch(char P[], int m, char T[], int n)
{
 int i,j;
 char F[30];
 FailureFn(P,m,F);
 i=j=0;
 while(i<n)
 {
  if(T[i]==P[j])
  {
   i=i+1;
   j=j+1;
  }
 if(j==m)
 {
  return(i-m);
 }
 else if(i<n && T[i]!=P[j])
 {
  if(j!=0)
  {
   j=F[j-1];
  }
  else
  {
   i=i+1;
  }
 }
 }
 return -1;
}

int FailureFn(char P[], int m, char F[])
{
 int i=1,j=0;
 F[0]=0;
 while(i<m)
 {
  if(P[i]==P[j])
 {
  {
   j=j+1;
   F[i]=j;
   i=i+1;
  }
}
 else
 {
  if(j!=0)
  {
   j=F[j-1];
  }
 else
  {
  F[i]=0;
  i=i+1;
   }
  } 
 }
 }



#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
int BruteForce(char P[],int m, char T[],  int n);
int main()
{
 char pattern[30], string[30];
 int loc;
 cout<<"Enter the sequence of characters: ");
 gets(string);
 cout<<"Enter the sequence to search: ");
 gets(pattern);
 loc=BruteForce(pattern,strlen(pattern),string,strlen(string));
 if(res==-1)
 {

  cout<<"String is not available.";
 }
 else
 {
  cout<<"String is found at index: "<<res;
 }
 getch();
return 0;
}
int BruteForce(char P[],int m, char T[],  int n)
{
int i=0, length=n-m;
while(i<=length)
{
 int j=0;
 while(j<m && T[i]==P[j])
 {
   i=i+1;
   j=j+1;
 }
if(j==m)
{
return(i-m);
}
i=i-j+1;
}
return(-1);
}

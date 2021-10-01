#include<iostream.h>
#include<string.h>
#include<stdio.h>
int main() {
char st[50],tempvar;    // Only for 50 characters length
int i=0,j=0;
cout<<"\nEnter the string to reverse:";
gets(st);
j=strlen(st)-1;
while(i<j)
{
tempvar=st[i];
st[i]=st[j];
st[j]=tempvar;
i++;
j--;
}
cout<<"\nThe reverse string is:"<<st;
return(0);
}
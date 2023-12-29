#include<iostream.h>
void sum(int n)
{
int a;
a=0;
while(n>0)
{
a=a+n%10;
n=n/10;
}
cout<<"the sum=: "<<a;
}
void main()
{
int p;
cin>>p;
sum(p);}

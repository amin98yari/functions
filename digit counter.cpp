#include<iostream.h>
int count(int n)
{
int a=0;
while(n>0)
{
a=a+1;
n=n/10;
}
return a;
}
main()
{
int n;
cin>>n;
cout<<"the count is: "<<count(n);
}

#include<iostream.h>
int bsearch(int,int,int);
const int n=10;
int a[n];
void main()
 { int x;
for(int i=0;i<=n-1;i++)
cin>>a[i];
cout<<"enter x:";
cin>>x;
if(bsearch(0,n-1,x)==1)
cout<<"found";
else
cout<<"not found"; }
int bsearch(int low,int high,int x)
{ int mid;
mid=(low+high)/2;
if(low>high)
return(0);
else if(x==a[mid])
 return(1);
else if(x<a[mid])
return(bsearch(low,mid-1,x));
else
return(bsearch(mid+1,high,x));
}

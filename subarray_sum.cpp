#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void subArray(int a[],int n)
{
for(int i=0;i<n;i++)
{
for(int j=i;j<n;j++)
{
for(int k=i;k<=j;k++)
{
cout<<a[k]<<" ";
}
cout<<endl;
}
}
}
int main()
{
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
cin>>a[i];
}
subArray(a,n);
return 0;
}

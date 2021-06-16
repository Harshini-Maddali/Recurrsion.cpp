#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int Maxsumsubarray(int n,int a[])
{
    int maxi=INT_MIN;
    for(int i=0;i<n;i++)//0
    {
        for(int j=i;j<n;j++)//j-->0
        {
            int sum=0;
            for(int k=i;k<=j;k++)
            {
                sum+=a[k];
                maxi=max(maxi,sum);
            }
        }
    }
    return maxi;
}

int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	cout<<Maxsumsubarray(n,a);
	return 0;
}

     /*output:
           5 
          -2 -3 -1 0 1
             1*/

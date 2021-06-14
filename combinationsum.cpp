#include<bits/stdc++.h>
using namespace std;

void comb(int ind,int a[],vector<int>v1,int N,int n)
{
    if(ind==n)
    {
        if(N==0)
        {
            for(auto it:v1)
            cout<<it;
            cout<<"\n";
        }
        return;
    }
    if(a[ind]<=N)
    {
        v1.push_back(a[ind]);
        comb(ind,a,v1,N-a[ind],n);
        v1.pop_back();
    }
    comb(ind+1,a,v1,N,n);
    
    
}


int main()
{
    int n,N,i=0
	;
    cin>>n>>N;
    int arr[n];
    vector<int>vec1;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    comb(0,arr,vec1,N,n);
}

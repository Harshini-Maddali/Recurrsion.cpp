#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void printcombinationsum(int N,std::vector<int>&ds)
{
    if(N==0)
    {
       for(auto it:ds)
       {
          cout<<it<<" ";
       }
       cout<<"\n";
    }
    for(int i=1;i<=N;i++)
    {
        ds.push_back(i);
        printcombinationsum(N-1,ds);
        ds.pop_back();
    }
}
int main() 
{
	int N;
	cin>>N;
	vector<int>ans;
	printcombinationsum(N,ans);
	return 0;
}

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
string s;
int n;
void printpermutations(string ss,int vis[])
{
    if(s.size()==ss.size())
    {
        cout<<ss<<"\n";
        return;
    }
    for(int i=0;i<n;i++)//0 1 2  0-->a ;1-->b;2-->c
    {
        //check if it is already taken or not
        if(vis[i]==0)
        {
            vis[i]=1; //if it is not taken make it as 1 nd add toss
            printpermutations(ss+s[i],vis);
            vis[i]=0;
        }
    }
}


int main() {
	//strings
	cin>>s;
	n=s.size();
	int vis[n]={0};
	string ss="";
	printpermutations(ss,vis);
	return 0;
}


   //output:
          abc
            acb
            bac
            bca
            cab
            cba

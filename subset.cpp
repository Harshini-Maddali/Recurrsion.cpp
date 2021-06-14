#include<bits/stdc++.h>
using namespace std;
void sub(int x,int a[],vector<int>v1,int n)
{
    if(x==n)
    {
    	
        return;
    }
   for(auto it:v1)
    {
        cout <<it; 
    }
    
    cout<<endl;
   
    for(int i=x+1;i<n;i++)
    {
      v1.push_back(a[i]);
	  sub(i,a,v1,n);
	  v1.pop_back();
    }


    
   

}
int main()
{
    int arr[3]={1,2,3};
    vector<int>v1;
    sub(-1,arr,v1,3);
}

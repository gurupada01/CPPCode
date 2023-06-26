#include<bits/stdc++.h>
using namespace std;
void solution()
{
   int n,k,a;
   cin>>n>>k;
   int store=0, flag=0;
   for (int i = 0; i < n; i++)
   {
        cin>>a;
        if(store+a>=k)
        {
            store=store+a-k;
        }
        else if(flag==0)
        {
            flag=i+1;
        }
   }
   if(flag>0)
   {
    cout<<"NO "<<flag<<endl;
   }
   else
   {
    cout<<"YES"<<endl;
   }
}
int main()
{
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        solution();
    }
    return 0;
}
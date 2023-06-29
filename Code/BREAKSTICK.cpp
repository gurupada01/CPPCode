#include<bits/stdc++.h>
using namespace std;
void solution()
{
   int n,x;
   cin>>n>>x;
   string ans="YES";
   if(n%2!=0 && x%2==0)
   {
    ans="NO";
   }
    cout<<ans<<endl;
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
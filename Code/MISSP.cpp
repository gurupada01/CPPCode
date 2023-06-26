#include<bits/stdc++.h>
using namespace std;
void solution()
{
    int n;
    cin>>n;
    int doll[n];
    for (int i = 0; i < n; i++)
    {
        cin>>doll[i];
    }
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        ans^=doll[i];
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
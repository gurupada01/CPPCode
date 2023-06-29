#include<bits/stdc++.h>
using namespace std;
void solution()
{
    int n, x, k, p;
    cin>>n>>x>>k>>p;
    int ans=0;
    if(k<=x)
    {
        ans=(p+(k*10));
    }
    else if(n>k&&k>x)
    {
        ans=(p+(x*10)+((k-x)*5));
    }
    else
    {
        ans=(p+(x*10)+((k-x)*5)+20);
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
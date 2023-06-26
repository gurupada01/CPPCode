#include<bits/stdc++.h>
using namespace std;
void solution()
{
    int n,p,x,y;
    int arr[n];
    int Time=0;
    cin>>n>>p>>x>>y;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < p; i++)
    {
        if(arr[i]==0)
        {
            Time+=x;
        }
        else
        {
            Time+=y;
        }
    }
    cout<<Time<<endl;    
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
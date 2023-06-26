#include<bits/stdc++.h>
using namespace std;
void solution()
{
   int n, ans=0;
   cin>>n;
   int arr[2*n];
   for (int i = 0; i < 2*n; i++)
   {
        cin>>arr[i];
   }
    for (int i = 0; i < 2*n; i++)
    {
        ans=0;
        for (int j=i+1; j<2*n; j++)
        {
            if(arr[j]==arr[i])
            {
                ans++;
            }
        }
        if(ans>=3)
        {
            cout<<"NO"<<endl;
            break;
        }
    }
    if(ans<3)
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
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,count=1;
   cin>>n;
   int arr[n];
   for (int i = 0; i < n; i++)
   {
        cin>>arr[i];
   }
   while(count<n)
   {
        for (int i = 0; i < n-count; i++)
        {
            if(arr[i]>arr[i+1])
            {
                int k=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=k;
            }
        }
        count++;
   } 
   for (int i = 0; i < n; i++)
   {
        cout<<arr[i]<<" ";
   }
    return 0;      
}
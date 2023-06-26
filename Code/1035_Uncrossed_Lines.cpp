#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    int arr[n], arr1[q];
    for (int i = 0; i < n-1; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < q-1; i++)
    {
        cin>>arr1[i];
    }
    int i=0, sum=0;
    while(i<n-1)
    {
        int k=0,j;
        while (k < q-1)
        {
            j = k; 
            if(arr[i]==arr1[j])
            {
                sum++;
                i++;
                k=j;
                break;
            }
            else
            {
                k++;
                continue;
            }
        }
        cout<<sum;
    }    
}
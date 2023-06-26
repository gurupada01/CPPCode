#include <bits/stdc++.h> 
using namespace std;
int rup(int *n,int *k)
{
    int t=0;
    if((*n)%(*k)==0)
        t+=1;
    return t;
}

int main() 
{
	int n;
	cin >> n;
	int k;
	cin >> k;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
        cout<<rup(&arr[i],&k)<<"\n";
    }
	return 0;
}
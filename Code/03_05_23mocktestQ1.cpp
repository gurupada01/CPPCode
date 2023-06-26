#include<bits/stdc++.h>
using namespace std;
int main()
{
    char arr[17];
    int val,Total=0;
    cin>>arr;
    int len=strlen(arr);
    int n=len;
    for (int  i = 0; i<n;i++)
    {
        if(arr[i]>='a' && arr[i]<='g')
        {
            val=arr[i]-87;
        }
        else if(arr[i]>='A' && arr[i]<='G')
        {
            val=arr[i]-55;
        }
        else if(arr[i]>='0' && arr[i]<='9')
        {
            val=arr[i]-48;
        }
        Total=Total+val*pow(17,len-1);
        len--;
    }
    cout<<Total;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char num[100];
    cin>>num;
    int total_even=0, total_odd=0,Diff=0;
    for (int i = 0; num[i]!='\0'; i++)
    {
        if(i%2==0)
        {
            total_odd+=(num[i]-48);
        }
        else
        {
            total_even+=(num[i]-48);
        }
    }
    if(total_even>total_odd)
    {
        Diff=total_even-total_odd;
    }
    else
    {
        Diff=total_odd-total_even;
    }
    cout<<Diff;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int add=(a+b), multi=(a*b);
    if(add>multi)
    {
        cout<<(add-multi);
    }
    else
    {
        cout<<(multi-add);
    }
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
       int N, X;
       cin>>N>>X;
       int D=N-X;
       cout<<D<<endl;
    }
    return 0;
}
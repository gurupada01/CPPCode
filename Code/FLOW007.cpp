#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int n;
        int m=0;
        cin>>n;
        while (n!=0)
        {
            int r=n%10;
            m=((m*10)+r);
            n/=10;
        }
        cout<<m<<endl;
    }
    return 0;
}
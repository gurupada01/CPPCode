#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin>>n;
        int m=0;
        while (n!=0)
        {
            if (n%10==4)
            {
                m+=1;
            }
            n/=10;
        }
        cout<<m<<endl;
    }
    return 0;
}
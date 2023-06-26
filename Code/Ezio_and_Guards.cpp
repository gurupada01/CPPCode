#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int a,b;
    for (int i = 0; i < t; i++)
    {
        int X,Y;
        cin>>X>>Y;
        if (X>=Y)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
        return 0;
}

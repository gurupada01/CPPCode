#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int a,b;
    for (int i = 0; i < t; i++)
    {
        int X,Y,Z;
        cin>>X>>Y>>Z;
        if (X!=Y && X!=Z && Y!=Z)
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

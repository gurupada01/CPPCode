#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int a,b;
    for (int i = 0; i < t; i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int sum;
        if (a+b+c>=100 && a>=10 && b>=10 && c>=10)
        {
            cout<<"PASS"<<endl;
        }
        else
            cout<<"FAIL"<<endl;
    }
    
    return 0;
}

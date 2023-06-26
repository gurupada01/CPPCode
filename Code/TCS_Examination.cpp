#include <iostream>
using namespace std;  
int main()  
{  
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int a,b,c;
        cout<<"Enter Dragon's no:-";
        cin>>a>>b>>c;
        int d,e,f;
        cout<<"Enter Sloth's no:-";
        cin>>d>>e>>f;
        int m=0;
        int n=0;
        m=(a+b+c);
        n=(d+e+f);
        if((m>n) || (m==n && a>d) || (m==n && a==d && b>e))
        {
            cout<<"Dragon"<<endl;
        }
        else if((m<n) || (m==n && a<d) || (m==n && a==d && b<e))
        {
            cout<<"Sloth"<<endl;
        }
        else
        {
            cout<<"Tie"<<endl;
        }
        
    }
}
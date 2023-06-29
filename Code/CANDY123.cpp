#include<bits/stdc++.h>
using namespace std;
void solution()
{
   int a,b;
   cin>>a>>b;
   for (int i = 1; i <1000 ; i++)
   {
        if(i%2!=0)
        {
            a-=i;
            if(a<0)
            {
                cout<<"Bob"<<endl;
                break;
            }
        }
        else
        {
            b-=i;
            if(b<0)
            {
                cout<<"Limak"<<endl;
                break;
            }        
        }
   }
}
int main()
{
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        solution();
    }
    return 0;
}
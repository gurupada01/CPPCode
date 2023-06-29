#include<bits/stdc++.h>
using namespace std;
void solution()
{
   int n,m;
   cin>>n;
   string s;
   cin>>s;
   for (int i = 0; i < n-1; i+=2)
   {        
        char q=s[i];
        s[i]=s[i+1];
        s[i+1]=q;       
   }
   for (int i = 0; i < n; i++)
   {
	    s[i]+=(2*(108-s[i])+3);
   }
   
   cout<<s<<endl;
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
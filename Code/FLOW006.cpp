//Sum of Digits
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
         int sum=0;
         while (n!=0)
         {
            int m=n%10;
            sum+=m;
            n=n/10;
         }
         cout<<sum<<endl;
    }
return 0; 
}
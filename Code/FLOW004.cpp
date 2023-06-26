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
        int rem=n%10;
        while (n>9)
        {
            n/=10;
        }
        cout<<rem+n<<endl;
    }
    return 0;
}
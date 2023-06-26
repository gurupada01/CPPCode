#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
       int N, M;
       cin>>N>>M;
       if(N>=M){
        cout<<N-M<<endl;
       }
       else{
        cout<<"0"<<endl;
       }
    }
    return 0;
}
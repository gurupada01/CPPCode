#include<bits/stdc++.h>
using namespace std;
void strick()
{
    int n;
    cin>>n;
    int om[n];
    int addy[n];
    int om_max=0, om_count=0;
     int addy_max=0, addy_count=0;
    for (int i = 0; i < n; i++)
    {
        cin>>om[i];
        if(om[i]>0)
        {
            om_count++;
        }
        else
        {
            om_count=0;
        }
        if(om_max<om_count){
            om_max=om_count;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cin>>addy[i];
        if(addy[i]>0)
        {
            addy_count++;
        }
        else
        {
            addy_count=0;
        }
        if(addy_max<addy_count){
            addy_max=addy_count;
        }
    }
    if(om_max>addy_max){
        cout<<"OM"<<endl;
    }
    else if(om_max<addy_max){
        cout<<"ADDY"<<endl;
    }
    else{
        cout<<"DRAW"<<endl;
    }
}
int main()
{
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        strick();
    }
    return 0;
}
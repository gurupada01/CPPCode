#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Size of array is:-"<<size<<endl;
    cout<<"Even No: \n"; 
    for (int i = 0; i < size; i++)
    {
        if(arr[i]%2==0)
        {
            cout<<" "<<arr[i]<<"\t";
        }
    }
    cout<<"\nOdd No: \n"; 
    for (int i = 0; i < size; i++)
    {
        if(arr[i]%2==1)
        {
            cout<<" "<<arr[i]<<"\t";
        }
    }  
    return 0;
}
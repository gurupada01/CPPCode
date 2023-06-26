#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6};
    int evensum=0, oddsum=0;
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Size of array is:-"<<size<<endl;
    cout<<"Even No: \n"; 
    for (int i = 0; i < size; i++)
    {
        if(arr[i]%2==0)
        {
            cout<<" "<<arr[i]<<"\t";
            evensum+=arr[i];
        }
    }
    cout<<"Sum of even no:"<<evensum<<endl;
    cout<<"\nOdd No: \n"; 
    for (int i = 0; i < size; i++)
    {
        if(arr[i]%2==1)
        {
            cout<<" "<<arr[i]<<"\t";
            oddsum+=arr[i];
        }
    } 
    cout<<"Sum of odd no:"<<oddsum<<endl; 
    return 0;
}
#include<bits/stdc++.h>
#define MAX 99999
using namespace std;
void fibonacci(int n)
{
    int a = 0, b = 1, next;
    for (int i = 0; i<n; i++)
    {
        next = a + b;
        a = b;
        b = next;
    }
    cout<< a;
}

void prime(int n)
{
    int i, j, flag, count =0;
    for (i=2; i<=MAX; i++)
    {
        flag = 0;
        for (j=2; j<i; j++)
        {
            if(i%j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0){
            if(++count == n)
            {
                cout<< i;
                break;
            }
        }
    }
}
int main(){
    int n;
    cin >> n;  
    if(n%2 == 1) 
        fibonacci (n/2 + 1);
    else 
        prime(n/2);
    
    
    return 0;
}
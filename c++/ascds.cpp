#include <bits/stdc++.h>
using namespace std;
void fact(int arr[],int n,int i)
{
    if( i>n)
    {
        return ;
    }
    swap(arr[i],arr[n-1]);
    
    fact(arr,--n,++i);
}
int main() {
    int a[4] = {10,20,30,40};
    fact(a,4,0);
    for(int j=0;j<4;j++)
        {
            cout<<a[j]<<endl;
        }

    return 0;
}
#include <iostream>
using namespace std;
int getpivot(int arr[],int n)
{
    int s=0;
    int e=n-1;
    int mid= s+ (e-s)/2;
    while(s<e)
    {
        if(arr[mid]>=arr[0])
        {
            s=mid+1;
        }
        else
        {
            e=mid;
        }
        mid= s+ (e-s)/2;
    }
    return s;
}


int main()
{
    int a[7]={5,8,16,32,1,2,4};
    cout<<"Index of pivot is "<<getpivot(a,7);
}

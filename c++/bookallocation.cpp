#include <iostream>
using namespace std;
bool isPossible(int arr[],int n, int m, int mid)
{
    int count=1;
    int pagesum=0;
    for(int i=0;i<n;i++)
    {
        if(pagesum+arr[i]<= mid)
        {
            pagesum += arr[i];
        }
        else
        {
            count++;
            if(count>m || arr[i]>mid)
            {
                return false;
            }
            pagesum = arr[i];
        }

    }
    return true;
}

int bkalctn(int arr[],int size,int students)
{
    int m=students;
    int n=size;
    int s=0;
    int sum=0;
    for(int i=0; i<n;i++)
    {
        sum += arr[i];
    }
    int e=sum;
    int ans=-1;
    int mid= s + (e-s)/2;
    while(s<=e)
    {
        if(isPossible(arr,n,m,mid))
        {
            ans=mid;
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
      mid= s + (e-s)/2;   
   }
 return mid;
}

int main()
{
    int a[4]={10,20,30,40};
    int ans=bkalctn(a,4,2);
    cout<< ans;
}

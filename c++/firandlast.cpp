#include<iostream>
using namespace std;
int fo(int arr[],int n,int k)
{
        int ans=-1;
        int start=0;
        int end=n-1;
        int mid= start + (end - start)/2;
        while(start<=end)
        {
            if(arr[mid]==k)
            {
                ans=mid;
                end=mid-1;
            }

            else if(arr[mid]<k)
            {
                start=mid+1;
            }

            else if(arr[mid]>k)
            {
                end=mid-1;
            }
            mid= start + (end - start)/2;           

        }
        return ans;
}

int lo(int arr[],int n,int k)
{
        int ans=-1;
        int start=0;
        int end=n-1;
        int mid= start + (end - start)/2;
        while(start<=end)
        {
            if(arr[mid]==k)
            {
                ans=mid;
                start=mid+1;
            }

            else if(arr[mid]<k)
            {
                start=mid+1;
            }

            else if(arr[mid]>k)
            {
                end=mid-1;
            }
            mid= start + (end - start)/2;           

        }
        return ans;
}


int main()
{
    int a[8]={0,0,1,1,2,2,2,2};
    cout<<fo(a,8,2)<<endl;
    cout<<lo(a,8,2)<<endl;


}
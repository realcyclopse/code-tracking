#include <iostream>
using namespace std;
int bs(int arr[],int size, int key)
{
    int start=0;
    int end= size-1;

    int mid= start + (end-start)/2;

    while(start<=end)
    {
        if(arr[mid]==key){
            return mid;
        }
        if(arr[mid]<key)
        {
            start=mid+1;
        }
        if(arr[mid]>key)
        {
            end=mid-1;
        }
         mid= start + (end-start)/2;

    }
    return -1;
}

int main()
{
    int array[7]= {1,2,3,5,6,82,345};
    int index= bs(array,7,345);
    cout<<index;


}
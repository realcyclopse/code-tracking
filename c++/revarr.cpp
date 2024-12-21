#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int rev[5];
    for(int i=0;i<5;i++){
        rev[i]=arr[4-i];
    }
    for(int i=0;i<5;i++){
        cout<<rev[i];
    }
}



// hold left click and drag to select
// then ctrl c to copy
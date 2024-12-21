#include<iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    cin>>n;
    cout<<"The digits are ";
    while(n>0){
        int rem;
        rem=n%10;
        cout<<rem<<" ";
        sum=sum+rem;
        n=n/10;
    }
    cout<<"\nThe sum of digits is "<<sum;
    }

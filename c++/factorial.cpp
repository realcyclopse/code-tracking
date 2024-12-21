#include<iostream>
using namespace std;
int main(){
    int n;
    cin>> n;
    int a=1;
    int sum;
    for(int i=2;i<=n;i++){
        sum=a*i;
        a=sum;
    }
        cout<<a;
    }

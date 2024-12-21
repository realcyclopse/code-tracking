#include<iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    cin>> n;
    cout<<"The factors of "<<n<<" are \n";
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<"\n";
            sum=sum+i;
        }
    }
    if(sum-n==n){
        cout<<n<<" is a perfect number.";
    }
    else{
        cout<<n<<" is not a perfect number.";
    }
    }

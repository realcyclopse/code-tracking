#include<iostream>
using namespace std;
int main(){
    int n;
    cin>> n;
    bool chk=1;
    for(int i=2;i<n;i++){
        if(n%i==0){
         chk=0;
         break;
        }
        }
        if(chk==0){
            cout<<n<<" is not a prime";
        }
        else{
            cout<<n<<" is a prime";
        }
        
    }

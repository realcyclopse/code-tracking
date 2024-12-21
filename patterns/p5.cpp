#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int row=1;
    char ch='A';
while(row<=n){
    int col =1;
    while(col<=row){

        cout<<ch<<" ";
        col = col+1;
    }
    cout<<"\n";
        ch=ch+1;
    row = row +1;
   
}
}
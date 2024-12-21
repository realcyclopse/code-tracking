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
        char value=ch+row+col-2;
        cout<<value<<" ";
        col = col+1;
    }
    cout<<"\n";
    row = row +1;
   
}
}
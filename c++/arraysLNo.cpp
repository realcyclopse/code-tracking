#include<iostream>
using namespace std;
int main(){
    int A[7]={4,8,6,9,5,2,7};
    int LN=4;
    for(int i=0;i<7;i++){
        if(A[i]>LN){
            LN=A[i];
        }
}
    cout<<LN;
}
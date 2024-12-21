#include<iostream>
using namespace std;
int main() {
  int n;
  int row =1;
  cin>>n;
  while(row<=n){ 
    int space=row-1;
    while (space){
      cout<<" ";
   //   space=space-1;
    }
    int star=n-row+1;
    while (star){
      cout<<"*";
      star-=1;
    }
    cout<<endl;
    row+=1;
  }
return 0;
}
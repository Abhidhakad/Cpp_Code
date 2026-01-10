#include <iostream>

using namespace std;

void printHollowRectangle(int n){
  
  for(int i=0; i<n; i++){
      for(int j=0; j<n; j++){
          if(i == 0 || i == n-1 || j == 0 || j == n-1){
              cout<<"*";
          }
          else {
              cout<<" ";
          }
      }
      cout<<endl;
  }
}


int main(){
  int n;
  cout<<"Enter the number of rows: "<<endl;
  cin>>n;
    
    
    printHollowRectangle(n);
  


  return 0;
}
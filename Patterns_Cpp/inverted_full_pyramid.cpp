#include <iostream>

using namespace std;


void inverted_full_pyramid(int n){
    
    for(int i = 0; i < n; i++){
      
      for(int j=0; j<i; j++){
          cout<<" ";
      }
      
      for(int k = 0; k<n-i; k++){
          cout<<"* ";
      }
      cout<<endl;
      
    }
    
    
}


int main(){
  int n;
  cout<<"Enter the number of rows: "<<endl;
  cin>>n;
    
    
    inverted_full_pyramid(n);
  


  return 0;
}
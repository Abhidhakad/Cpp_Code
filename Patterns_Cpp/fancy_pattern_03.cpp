#include <iostream>
using namespace std;

void fancy_pattern(int n){
  int num;
  for(int i=0; i<n; i++){
       num = 1;
      for(int j=0; j<(2*i)+1; j++){
          if(j==0 || j == (2*i)){
              cout<<"* ";
          }
          else{
            if(j<i){
                cout<<num++<<" ";
            }
            else{
                cout<<num--<<" ";
            }
          }
      }
      cout<<endl;
  } 
  
  for(int i=n-2; i>=0; i--){
          num = 1;
      for(int j=0; j<(2*i)+1; j++){
          if(j==0 || j == (2*i)){
              cout<<"* ";
          }
          else{
            if(j<i){
                cout<<num++<<" ";
            }
            else{
                cout<<num--<<" ";
            }
          }
      }
      cout<<endl;
  }
  
   
}


int main(){
  int n;
  cout<<"Enter the number of rows: "<<endl;
  cin>>n;
    
  fancy_pattern(n);
  return 0;
}
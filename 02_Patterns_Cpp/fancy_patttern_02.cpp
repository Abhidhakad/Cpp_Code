#include <iostream>
using namespace std;

void fancy_pattern(int n){
   
  int num = 1;
  for(int i = 0; i < n; i++){
      for(int j=0; j<(2*i)+1; j++){
          if(j%2==0){
              cout<<num++;
          }
          else{
              cout<<"*";
          }
      }
      cout<<endl;
  }

   for(int i=n-1; i>=0; i--){
       int newNum = num - (i+1);
       for(int j=(2*i); j>=0; j--){
         if(j%2==0){
             cout<<newNum++;
            
         }
         else{
             cout<<"*";
         }
       }
        num = num - (i+1);
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
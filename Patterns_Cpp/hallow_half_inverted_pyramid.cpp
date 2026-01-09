#include <iostream>

using namespace std;


void hallowInvertedHalfPyramid(int n){
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            if(i==0 || j ==0 || j==n-i-1){
                cout<<"*";
            }
            else{
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
    
    
    hallowInvertedHalfPyramid(n);
  


  return 0;
}
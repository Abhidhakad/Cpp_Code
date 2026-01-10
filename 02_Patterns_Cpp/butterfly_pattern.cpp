#include <iostream>
using namespace std;

void butterfly_pattern(int n){
    
    
    //first
    for(int i=0; i<n; i++){
        //print star
        for(int j=0; j<i+1; j++){
            cout<<"*";
        }
        
        //print space
        for(int k=0; k<2*(n-i-1); k++){
            cout<<" ";
        }
        for(int j=0; j<i+1; j++){
            cout<<"*";
        }
        
        cout<<endl;
    }
    
    //second 
    
    for(int i=0; i<n; i++){
        //star
        for(int j=0; j<n-i; j++){
            cout<<"*";
        }
        
        //space
        for(int k=0; k<2*i; k++){
            cout<<" ";
        }
        
        //star
        for(int j=0; j<n-i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}


int main(){
  int n;
  cout<<"Enter the number of rows: "<<endl;
  cin>>n;
    
  butterfly_pattern(n);
  return 0;
}
#include <iostream>
using namespace std;

void solid_half_diamond(int n){
    
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    
    
}

int main(){
  int n;
  cout<<"Enter the number of rows: "<<endl;
  cin>>n;
    
  solid_half_diamond(n);
  return 0;
}
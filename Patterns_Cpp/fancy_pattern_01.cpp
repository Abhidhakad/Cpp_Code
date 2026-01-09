#include <iostream>
using namespace std;

void fancy_pattern(int n){
    
    for(int i=0; i<n; i++){
        
        for(int j=0; j<(n+3)-i; j++){
            cout<<"*";
        }
        for(int k=0; k<(2*i)+1; k++){
            if(k%2==0){
                cout<<i+1;
            }
            else{
                cout<<"*";
            }
        }
        for(int j=0; j<(n+3)-i; j++){
            cout<<"*";
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
#include <iostream>

using namespace std;

void numeric_palindrome_equilateral_pyramid(int n){
    
    for(int i=0; i<n; i++){
        //print space 
        for(int j=0; j<n-i-1; j++){
            cout<<"  ";
        }
        
        //print number
        
        int k = 0;
        for(; k<i+1; k++){
            cout<<k+1<<" ";
        }
        
        for(int l = k-1; l>=1; l--){
            cout<<l<<" ";
        }
        
        
        cout<<endl;
        
    }
    
}


int main(){
  int n;
  cout<<"Enter the number of rows: "<<endl;
  cin>>n;
    
    
    numeric_palindrome_equilateral_pyramid(n);
  


  return 0;
}
#include <iostream>

using namespace std;


void hallowFullPyramid(int n){
    
    for(int i=0; i<n; i++){
        
        //print space 
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        //print start
        for(int k=0; k < (2*i)+1; k++){
            if(k==0 || k==(2*i) || i== n-1){
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
    
    
    hallowFullPyramid(n);
  


  return 0;
}
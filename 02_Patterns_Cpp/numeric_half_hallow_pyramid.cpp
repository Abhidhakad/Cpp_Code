#include <iostream>

using namespace std;

void numeric_Hallow_Half_Pyramid(int n){
    
    for(int i = 0; i < n; i++){
        for(int j=0; j<i+1; j++){
            if(j==0 || j == i || i == n-1){
                cout<<j+1<<" ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    
}


int main(){
  int n;
  cout<<"Enter the number of rows: "<<endl;
  cin>>n;
    
    
    numeric_Hallow_Half_Pyramid(n);
  


  return 0;
}
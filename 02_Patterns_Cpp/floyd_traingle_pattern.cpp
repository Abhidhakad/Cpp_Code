#include <iostream>
using namespace std;

void floyd_traingle_pattern(int n){
    int num = 1;
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout<<num++<<" ";
        }
        cout<<endl;
    }
    
    
}

int main(){
  int n;
  cout<<"Enter the number of rows: "<<endl;
  cin>>n;
    
  floyd_traingle_pattern(n);
  return 0;
}
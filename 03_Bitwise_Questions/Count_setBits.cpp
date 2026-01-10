#include <iostream>
using namespace std;

int count_setBits(int n){
    
    int count = 0;
    
    while(n!=0){
        if(n&1==1){
            count++;
        }
        n = n>>1;
    }
    return count;
}

int main() {
	
    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;
    
    int cnt = count_setBits(n);
    
    cout<<"The number of set bits are: "<<cnt<<endl;
    
    
    return 0;
	
}

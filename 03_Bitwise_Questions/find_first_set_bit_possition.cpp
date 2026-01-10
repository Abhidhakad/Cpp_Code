#include <iostream>
using namespace std;

int findPosition(int n) {
       
       if(n==0 || (n & (n-1)) != 0) return -1;
       
       int pos = 1;
       while((n & 1) == 0){
           n = n>>1;
           pos++;
       }
        
        return pos;
    }

int main() {
	
    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;
    
    int pos = findPosition(n);
    
    cout<<"The pos of set bit is: "<<pos<<endl;
    
    
    return 0;
	
}

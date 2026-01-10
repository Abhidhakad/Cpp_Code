#include <iostream>
using namespace std;

int setKth_bit(int n, int k){
    
    int mask = 1;
    mask = mask<<k;
    
    return mask ^ n;
}


int main() {
	
    int n,k;
    cout<<"Enter n: "<<endl;
    cin>>n;
    cout<<"Enter k: "<<endl;
    cin>>k;
    
    int ans = setKth_bit(n,k);
    
    cout<<"Answer is: "<<ans<<endl;
	
	return 0;
	
}

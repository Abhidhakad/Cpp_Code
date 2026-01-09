#include <iostream>
using namespace std;


int reverse_integer(int n){
    
    int ans = 0;
    while(n!=0){
        int digit = n%10;
        ans = ans*10+digit;
        n = n/10;
    }
    
    return ans;
}


int main() {
	
    int number;
    
	cout<<"Enter the number: "<<endl;
	cin>>number;
	
	int ans = reverse_integer(number);
	
	cout<<"The reverse number is: "<<ans<<endl;
	
	return 0;
	
}

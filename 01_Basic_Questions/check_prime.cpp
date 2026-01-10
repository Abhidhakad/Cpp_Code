#include <iostream>
using namespace std;


bool checkPrime(int n){
    if(n<=1){
        return false;
    }
    
    for(int i=2; i<=n/2; i++){
        if(n%i==0){
            return false;
        }
    }
    
    return true;
}

int main() {
	
    int number;
	cout<<"Enter the number to check the number is prime or not: "<<endl;
	cin>>number;
	
	bool is_prime = checkPrime(number);
	if(is_prime){
	    cout<<"The number "<<number<<" is prime"<<endl;
	}
	else{
	    cout<<"The number "<<number<<" is not prime"<<endl;
	}
	return 0;
	
}

#include <iostream>
using namespace std;

long long find_factorial(int n){
    
    long long ans = 1;
    while(n!=0){
        ans = ans * n;
        n--;
    }
    return ans;
}

int main() {
	
    int number;
	cout<<"Enter the number to find the factorial of the number: "<<endl;
	cin>>number;
	
	long long fact = find_factorial(number);
	cout<<"The factorial of the number "<<number<<" is "<<fact<<endl;
	return 0;
	
}

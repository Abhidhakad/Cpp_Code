#include <bits/stdc++.h>
using namespace std;

void isEven(int n){
    if((n & 1) == 0){
        cout<<"Number is even: "<<endl;
    }
    else{
        cout<<"Number is Odd: "<<endl;
    }
}

int main() {
	
    int number;
	cout<<"Enter the number to check is it even or odd: "<<endl;
	cin>>number;
	
	isEven(number);
	return 0;
	
}

#include <bits/stdc++.h>
using namespace std;

double pi = 3.1416;

double areaOfCircle(int r){
    
    return pi*r*r;
}

int main() {
	
	int radius;
	cout<<"Enter the radius of the circle: "<<endl;
	cin>>radius;
	
	cout<<"Area of the circle is: "<<areaOfCircle(radius);
	
	return 0;
	
}

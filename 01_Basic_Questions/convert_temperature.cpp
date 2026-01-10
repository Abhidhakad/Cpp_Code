#include <iostream>
#include <vector>
using namespace std;

void convertTemperature(double celsius) {
        vector<double>ans;
        ans.push_back((celsius + 273.15));
        ans.push_back((celsius * 1.80 + 32.00));
        
        cout<<"The temperature in Kelvin: "<<ans[0]<<endl;
        cout<<"The temperature in Fahrenheit: "<<ans[1]<<endl;
    }

int main() {
	
    double celsius;
    cout<<"Enter celsius: "<<endl;
    cin>>celsius;
    
    convertTemperature(celsius);
	
	return 0;
	
}

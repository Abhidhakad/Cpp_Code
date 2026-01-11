#include <bits/stdc++.h>
using namespace std;




int missingNumber(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();
       for(int i=0; i<n; i++){
         sum = sum + nums[i];   
       }

       return (n*(n+1)/2)-sum;
    }

int main() {
	vector<int> nums{0,1,4,2,5};
	
	int ans = missingNumber(nums);
	
	cout<<"Missing number is "<<ans<<endl;
	
    return 0;
}

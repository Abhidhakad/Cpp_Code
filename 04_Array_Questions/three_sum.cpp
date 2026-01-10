#include<iostream>
#include<vector>
#include <algorithm>
#include <set>
using namespace std;


// when target is 0
void threeSum(vector<int> arr){
    
    int n = arr.size();
    
    set<vector<int>> ans;
    
    for(int i = 0; i < n; i++){
        int tar = -arr[i];
        
        set<int> s;
        for(int j = i + 1; j < n; j++){
            int third = tar-arr[j];
            
            if(s.find(third) != s.end()){
                vector<int> triplet{arr[i],arr[j],third};
                sort(triplet.begin(),triplet.end());
                ans.insert(triplet);
            }
            s.insert(arr[j]);
        }
    }
    
    for (const auto& vec : ans) {
    for (int x : vec) {
        cout << x << " ";
    }
    cout << endl;
}
}

void threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        vector<vector<int>> ans;
        for(int i=0; i<n; i++){

            if(i>0 && nums[i]==nums[i-1]) continue;
            int j = i+1;
            int k = n-1;
            while(j<k){
                long long sum = nums[i] + nums[j] + nums[k];
                if(sum<0){
                    j++;
                }
                else if(sum>0){
                    k--;
                }
                else{
                    vector<int> trip{nums[i],nums[j],nums[k]};
                    ans.push_back(trip);
                    j++;
                    k--;
                    while(j<k && nums[j]==nums[j-1]) j++;
                    while(j<k && k+1<n && nums[k] == nums[k+1]) k--;
                }
            }
        }

    }



int main(){
    
    vector<int> arr1 = {1,0,-1,7,2,4,6};
   
    // twoSum(arr1,6);
    threeSum(arr1);
    
    return 0;
}
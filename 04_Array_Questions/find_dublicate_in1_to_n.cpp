#include<iostream>
#include <vector>

using namespace std;


// brute force solution tc (n2) and sc (1)
// int findDuplicate(vector<int>& nums) {
//         int n = nums.size();
        
//         for(int i=0; i<n; i++){
//             for(int j= i+1; j<n; j++){
//                 if(nums[i]==nums[j]){
//                     return nums[i];

//                 }
//             }
//         }
//         return -1;
// }

// optimized but not fully tc (nlogn) 
// int findDuplicate(vector<int>& nums) {
//         int n = nums.size();
        
//         sort(nums.begin(),nums.end());
//         for(int i=0; i<n; i++){
//             if(nums[i]==i){
//                 return i;
//             }
//         }
//         return -1;
//     }

// o(n) approch
int findDuplicate(vector<int>& nums) {
        while(nums[0]!=nums[nums[0]]){
            swap(nums[0],nums[nums[0]]);
        }
        return nums[0];
}


// o(n) approch
// int findDuplicate(vector<int>& nums) {
//         int n = nums.size();
        
//         int ans = -1;
//         for(int i=0; i<n; i++){
//             int index = abs(nums[i]);
//             if(nums[index]<0){
//                 ans = index;
//                 break;
//             }
//             nums[i] *= -1;
//         }
//         return ans;
// }



int main(){
    
    vector<int> nums{1,3,4,2,2};
    
    int ans = findDuplicate(nums);
    
    if(ans != (-1)){
        cout<<"dublicate element is  "<<ans<<endl;
    }
    else{
        cout<<"Not found dublicate elements "<<endl;
    }
    
    return 0;
}
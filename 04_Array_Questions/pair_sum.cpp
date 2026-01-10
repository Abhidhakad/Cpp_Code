#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;


// optimized using hashing 

void pairSum(vector<int> nums,int target){
    unordered_map<int, int> mp;  

    for (int i = 0; i < nums.size(); i++) {
        int need = target - nums[i];

        // check first
        if (mp.find(need) != mp.end()) {
            cout<<"("<<mp[need]<<","<<i<<")"<<" ";
        }
     
        mp[nums[i]] = i;
    }
}


// brute force method
void twoSum(vector<int> arr, int key){
    
    int n1 = arr.size();
    
    for(int i = 0; i < n1; i++){
        cout<<"Pairs for "<<arr[i]<<" is ";
        for(int j = i + 1; j < n1; j++){
            cout<<"("<<arr[i]<<","<<arr[j]<<")"<<" ";
        }
        cout<<endl;
    }
    
}

int main(){
    
    vector<int> arr1 = {1,3,5,7,2,4,6};
   
    // twoSum(arr1,6);
    pairSum(arr1,9);
    
    return 0;
}
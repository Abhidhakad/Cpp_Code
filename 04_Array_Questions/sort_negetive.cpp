#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> arr){
    int n = arr.size();
    
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void sort_Negetive(vector<int> &nums){
    int start = 0;
    int end = nums.size()-1;
    
    while(start<end){
        if(nums[start] < 0){
            start++;
        }
        else if(nums[end] > 0){
            end--;
        }
        else{
            swap(nums[start],nums[end]);
            start++;
            end--;
        }
    }
}

int main(){
    
    vector<int> arr{-12,23,-1,-2,0,1,2,3,4,-13,-100,14,45};
    
    print(arr);
    
    sort_Negetive(arr);
    
    print(arr);
    
    return 0;
}
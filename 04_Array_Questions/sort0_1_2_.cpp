// dutch national flag algorithm

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


void sort0_1_2(vector<int> &nums){
    
    int start = 0;
    int i = 0;
    int end = nums.size()-1;
    
    while(i<=end){
       
        if(nums[i]==0){
            swap(nums[i],nums[start]);
            start++;
            i++;
        }
        else if(nums[i]==1){
            i++;
        }
        else if(nums[i]==2){
            swap(nums[i],nums[end]);
            end--;
        }
    }
    
}

int main(){
    
    vector<int> arr{2,0,1};
    
    print(arr);
    
    sort0_1_2(arr);
    
    print(arr);
    
    
    
    return 0;
}
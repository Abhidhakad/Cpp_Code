#include<iostream>
#include<vector>
using namespace std;

void print(vector<int> arr){
    int n = arr.size();
    
    for(auto value : arr){
        cout<<value<<" ";
    }
    cout<<endl;
}

void intersection(vector<int> arr1,vector<int> arr2,vector<int> &ans){
    
    int n1 = arr1.size();
    int n2 = arr2.size();
    
    for(int i=0; i<n1; i++){
        int element = arr1[i];
        
        for(int j = 0; j<n2; j++){
            if(arr2[j]==element){
                ans.push_back(element);
                arr2[j] = -1;
            }
        }
    }
}

void unionArr(vector<int> arr1,vector<int> arr2,vector<int> &ans){
    
    int n1 = arr1.size();
    int n2 = arr2.size();
    
    for(int i=0; i<n1; i++){
        for(int j=0; j<n2; j++){
            if(arr1[i]==arr2[j]){
                arr2[j] = -1;
            }
        }
    }
    
    for(int x:arr1){
        if(x != -1){
            ans.push_back(x);
        }
    }
    for(int x:arr2){
        if(x != -1){
            ans.push_back(x);
        }
    }
}

int main(){
    
    vector<int> arr1 = {1,2,3};
    vector<int> arr2 = {3,4,5};
    
    vector<int>ans;
    
    unionArr(arr1,arr2,ans);
    
    // intersection(arr1,arr2,ans);
    
    print(ans);
    
    return 0;
}
#include<iostream>
using namespace std;


void print(int* arr, int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int findUnique(int arr[], int n){
    int ans = 0;
    
    for(int i=0; i<n; i++){
        ans = ans^arr[i];
    }
    
    return ans;
}

int main(){
    
    int arr[11] = {12,12,13,14,14,15,15,17,18,17,18};
    int n = 11;
    print(arr,n);
    
    int ans = findUnique(arr,n);
    
    cout<<"Unique element is "<<ans<<endl;
    
    return 0;
}
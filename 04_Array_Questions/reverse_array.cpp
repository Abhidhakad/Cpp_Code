#include<iostream>
using namespace std;


void print(int* arr, int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void reverseArr(int* arr, int n){
    int start = 0;
    int end = n-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main(){
    
    int arr[9] = {10,12,14,15,23,34,56,67,78};
    int n = 9;
    print(arr,n);
    
    reverseArr(arr,n);
    
    print(arr,n);
    
    return 0;
}
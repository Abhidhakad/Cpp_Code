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


//another way using three pointer
void sort0_1_(vector<int> &arr){
    int start = 0;
    int i = 0;
    int end = arr.size()-1;
    
    while(i<end){
        if(arr[i]==0){
            start++;
            i++;
        }
        else if(arr[i] == 1){
            swap(arr[i],arr[end]);
            end--;
        }
    }
}

void sort0_1(vector<int> &arr){
    
    int start = 0;
    int end = arr.size()-1;
    
    while(start<end){
        if(arr[start]==0){
            start++;
        }
        else if(arr[end]==1){
            end--;
        }
        else if(arr[start] == 1 && arr[end] == 0){
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
    }
    
}

int main(){
    
    vector<int> arr{0,1,0,1,0,1,1,1,0,1,0};
    
    print(arr);
    
    sort0_1_(arr);
    
    print(arr);
    
    
    
    return 0;
}
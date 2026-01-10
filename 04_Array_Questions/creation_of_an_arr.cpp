#include<iostream>
using namespace std;
#define CAPACITY 100

void print(int* arr, int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void insertAtTop(int* arr, int* n, int capacity, int ele){
    
    if(*n == capacity){
        cout << "Arraay is full" << endl;
        return;
    }
    
    for(int i = *n - 1; i >= 0; i--){
        arr[i+1] = arr[i];
    }
    
    arr[0] = ele;
    (*n)++;
    
}

void insertAtEnd(int* arr, int* n, int capacity, int ele){
    
    if(*n == capacity){
        cout << "Array is full" << endl;
        return;
    }
    arr[*n] = ele;
    (*n)++;
    
}

void insertAtPos(int* arr, int* n, int capacity, int ele, int pos){
    if(*n == capacity){
        cout << "Array is full" << endl;
        return;
    }
    if( pos > *n){
        cout << "Invalid Position" << endl;
        return;
    }
    
    int index = pos -1;
    
    for(int i = *n - 1; i >= index; i--){
        arr[i+1] = arr[i];
    }
    arr[index] = ele;
    (*n)++;
    
}


void deleteAtTop(int* arr, int* n){
    
    if(*n == 0 ){
        cout << "Array is empty" << endl;
        return;
    }
    for(int i=1; i<*n; i++){
        arr[i-1] = arr[i];
    }
    (*n)--;
    
}

void deleteAtEnd(int* arr, int* n){
    if(*n == 0){
        cout << "Array is empty" << endl;
        return;
    }
    (*n)--;
}

void deleteAtPos(int* arr, int* n, int pos){
    if(*n == 0){
        cout << "Array is empty" << endl;
        return;
    }
    if(pos < 0 || pos >= *n){
        cout << "Invalid position" << endl;
        return;
    }
    int index = pos - 1;
    
    for (int i = index; i < *n - 1; i++)
        arr[i] = arr[i + 1];

    (*n)--;
    
}


int main(){
    
    int n = 0;
    int arr[CAPACITY];
    
    
    insertAtTop(arr,&n,CAPACITY,10);
    insertAtTop(arr,&n,CAPACITY,8);
    insertAtEnd(arr,&n,CAPACITY,12);
    insertAtEnd(arr,&n,CAPACITY,14);
    
    
    insertAtPos(arr,&n,CAPACITY,33,3);
    
    print(arr,n);
    
    // deleteAtTop(arr,&n);
    // deleteAtEnd(arr,&n);
    
    deleteAtPos(arr,&n,3);
    
    
    // cout<<"N is "<<n<<endl;
    
    print(arr,n);
    
    
    
    
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

void print(int arr[][3],int row, int col){
    for(int i=0; i<row; i++){
	    for(int j=0; j<col; j++){
	        cout<<arr[i][j]<<" ";
	    }
	    cout<<endl;
	}
}

void colWisePrint(int arr[][3],int row, int col){
    for(int i=0; i<row; i++){
	    for(int j=0; j<col; j++){
	        cout<<arr[j][i]<<" ";
	    }
	    cout<<endl;
	}
}

int findMax(int arr[][3],int row, int col){
    int max = INT_MIN;
    
    for(int i=0; i<row; i++){
	    for(int j=0; j<col; j++){
	        if(max < arr[i][j]){
	            max = arr[i][j];
	        }
	    }
	}
    return max;
}

int findMin(int arr[][3],int row, int col){
    int min = INT_MAX;
    
    for(int i=0; i<row; i++){
	    for(int j=0; j<col; j++){
	        if(min > arr[i][j]){
	            min = arr[i][j];
	        }
	    }
	}
    return min;
}

void transpose(int arr[][3],int row, int col){
    for(int i=0; i<row; i++){
	    for(int j=i+1; j<col; j++){
	        int temp = arr[i][j];
	        arr[i][j] = arr[j][i];
	        arr[j][i] = temp;
	    }
	}
}

int main() {
	int arr[3][3];
	int row = 3;
	int col = 3;
	cout<<"Enter array elements: "<<endl;
	
	for(int i=0; i<row; i++){
	    for(int j=0; j<col; j++){
	        cin>>arr[i][j];
	    }
	}
	
	
	print(arr,row,col);
// 	cout<<"col wise print "<<endl;
// 	colWisePrint(arr,row,col);
	
// 	cout<<"Max ele: "<<findMax(arr,row,col)<<endl;
// 	cout<<"Min ele "<<findMin(arr,row,col)<<endl;


    transpose(arr,row,col);
    cout<<"after transpose "<<endl; 
    print(arr,row,col);
	
	return 0;
}

#include <bits/stdc++.h>
using namespace std;

int rowWithMax1s(vector<vector<int>> &arr) {
        // code here
        int n = arr.size();
        
        int countOne = 0;
        int rowNo = -1;
        
        for(int i=0; i<n; i++){
            int count = 0;
            for(int j=0; j<arr[i].size(); j++){
                if(arr[i][j] == 1){
                    count++;
                }
            }
            if(countOne < count){
                countOne = count;
                rowNo = i;
            }
        }
        
        return rowNo;
    }

int main() {
	vector<vector<int>> arr = {
    {0, 1, 1, 1},
    {0, 0, 1, 1},
    {1, 1, 1, 1},
    {0, 0, 0, 0}
};
	
	int rowNo = rowWithMax1s(arr);
	
	cout<<"row number is "<<rowNo<<endl;
	
    return 0;
}

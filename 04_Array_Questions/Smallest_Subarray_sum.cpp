#include <iostream>
#include <vector>
using namespace std;


// reverse variation of kadens algorithm 
int smallestSumSubarray(vector<int> &a)
{
    int n = a.size();
    int currSum = 0;
    int miniSum = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        currSum = min(a[i], currSum + a[i]);
        miniSum = min(currSum, miniSum);
    }

    return miniSum;
}

int main()
{
    vector<int> arr {3,-4, 2,-3,-1, 7,-5};
    int sum = smallestSumSubarray(arr);
    cout<<"Smallest subarray Sum is: "<<sum<<endl;
    return 0;
}
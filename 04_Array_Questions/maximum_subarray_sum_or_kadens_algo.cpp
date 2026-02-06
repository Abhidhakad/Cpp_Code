#include <iostream>
#include <vector>

using namespace std;

int maxSubArray(vector<int> &nums)
{
    int n = nums.size();

    if (n == 1)
        return nums[0];
    int currSum = 0;
    int sum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        currSum += nums[i];
        sum = max(sum, currSum);
        if (currSum < 0)
        {
            currSum = 0;
        }
    }
    return sum;
}

int main()
{

    vector<int> nums{-2, -1, -3};
    int ans = maxSubArray(arr);

    cout << "max subarray length: " << ans << endl;

    return 0;
}
#include <iostream>
#include <vector>

using namespace std;

int findPivot(vector<int> &nums)
{
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        int lSum = 0;
        int rSum = 0;

        // calculating left sum
        for (int j = 0; j < i; j++)
        {
            lSum = lSum + nums[j];
        }

        // calculting right sum
        for (int k = i + 1; k < n; k++)
        {
            rSum = rSum + nums[k];
        }
        if (lSum == rSum)
        {
            return i;
        }
    }
    return -1;
}

// optimzed tc (n) and sc(n);
int pivotIndex1(vector<int> &nums)
{
    int n = nums.size();

    vector<int> lSum(n);
    vector<int> rSum(n);

    lSum[0] = 0;
    for (int i = 1; i < n; i++)
    {
        lSum[i] = lSum[i - 1] + nums[i - 1];
    }
    rSum[n - 1] = 0;
    for (int i = n - 2; i >= 0; i--)
    {
        rSum[i] = rSum[i + 1] + nums[i + 1];
    }

    for (int i = 0; i < n; i++)
    {
        if (lSum[i] == rSum[i])
        {
            return i;
        }
    }

    return -1;
}

// fully optimized tc (n) and sc (1)

int pivotIndex2(vector<int> &nums)
{
    int n = nums.size();
    int totalSum = 0;

    for (int i = 0; i < n; i++)
    {
        totalSum += nums[i];
    }
    int leftSum = 0;
    int rightSum = totalSum;
    for (int i = 0; i < n; i++)
    {
        rightSum -= nums[i];
        if (rightSum == leftSum)
        {
            return i;
        }
        leftSum += nums[i];
    }

    return -1;

    
}

int main()
{

    vector<int> nums{1, 7, 3, 6, 5, 6};

    int ans = pivotIndex2(nums);

    if (ans != 0)
    {
        cout << "Pivot index is " << ans << endl;
    }
    else
    {
        cout << "Not found pivot index " << endl;
    }

    return 0;
}
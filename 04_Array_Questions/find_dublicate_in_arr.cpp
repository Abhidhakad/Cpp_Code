#include <bits/stdc++.h>
using namespace std;

// brute force solution
vector<int> findDuplicates1(vector<int> &nums)
{
    vector<int> ans;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] == nums[j])
            {
                ans.push_back(nums[i]);
            }
        }
    }
    return ans;
}

// optimized but not fully tc (nlogn)
vector<int> findDublicate1(vector<int> &nums)
{
    int n = nums.size();
    vector<int> ans;
    sort(nums.begin(), nums.end());

    for (int i = 0; i < n - 1; i++)
    {
        if (nums[i] == nums[i + 1])
        {
            ans.push_back(nums[i]);
        }
    }
    return ans;
}
d

    // optimized code
    vector<int> findDuplicates(vector<int> &nums)
{
    vector<int> ans;
    unordered_map<int, int> mp;

    for (int x : nums)
    {
        mp[x]++;
        if (mp[x] == 2)
        {
            ans.push_back(x);
        }
    }
    return ans;
}

int main()
{
    vector<int> nums{4, 3, 2, 7, 8, 2, 3, 1};

    vector<int> ans = findDuplicates(nums);

    for (auto it : ans)
    {
        cout << it << " ";
    }

    return 0;
}

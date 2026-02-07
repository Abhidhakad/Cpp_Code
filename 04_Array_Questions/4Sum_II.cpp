#include <iostream>
#include <vector>

using namespace std;

int fourSumCount(vector<int> &nums1, vector<int> &nums2,
                 vector<int> &nums3, vector<int> &nums4)
{

    unordered_map<int, int> mp;

    // nums3 + nums4 ke saare sums ka count
    for (int a : nums3)
    {
        for (int b : nums4)
        {
            mp[a + b]++;
        }
    }

    int count = 0;

    // nums1 + nums2 ke liye complementary sum dhundhna
    for (int x : nums1)
    {
        for (int y : nums2)
        {
            int need = -(x + y);
            if (mp.find(need) != mp.end())
            {
                count += mp[need];
            }
        }
    }

    return count;
}

int main()
{

    vector<int> arr{-1, 0, 1, 2, -1, -4};
    int target = 0;

    int count = fourSumCount(arr, target);

    cout << endl;

    return 0;
}

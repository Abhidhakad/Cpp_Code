#include <bits/stdc++.h>
using namespace std;

// brute force method
vector<vector<int>> threeSum(vector<int> arr, int target)
{

    int n = arr.size();
    set<vector<int>> st;
    for (int i = 0; i < n; i++)
    {
        int num1 = arr[i];

        for (int j = i + 1; j < n; j++)
        {
            int num2 = arr[j];

            for (int k = j + 1; k < n; k++)
            {
                int num3 = arr[k];
                if ((num1 + num2 + num3) == 0)
                {
                    vector<int> temp{arr[i], arr[j], arr[k]};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }
            }
        }
    }

    // for(auto it: st){
    //     for(int i=0; i<it.size(); i++){
    //         cout<<it[i]<<" ";
    //     }
    //     cout<<endl;
    // }

    return vector<vector<int>>(st.begin(), st.end());
}

// optimized approch tc 0(n2);
vector<vector<int>> threeSum1(vector<int> arr, int target)
{
    int n = arr.size();
    set<vector<int>> st;

    for (int i = 0; i < n; i++)
    {
        unordered_map<int, int> mp; // 🔥 fresh map for each i

        for (int j = i + 1; j < n; j++)
        {
            int need = target - (arr[i] + arr[j]);

            if (mp.find(need) != mp.end())
            {
                vector<int> temp = {arr[i], arr[j], need};
                sort(temp.begin(), temp.end());
                st.insert(temp);
            }

            mp[arr[j]] = j; // mark arr[j] as seen
        }
    }

    return vector<vector<int>>(st.begin(), st.end());
}

// fullly optimized
vector<vector<int>> threeSum(vector<int> &nums)
{
    int n = nums.size();
    sort(nums.begin(), nums.end());
    vector<vector<int>> ans;

    for (int i = 0; i < n; i++)
    {
        if (i > 0 && nums[i] == nums[i - 1])
            continue;
        int left = i + 1;
        int right = n - 1;

        while (left < right)
        {
            int sum = nums[i] + nums[left] + nums[right];
            if (sum == 0)
            {
                ans.push_back({nums[i], nums[left], nums[right]});

                while (left < right && nums[left] == nums[left + 1])
                    left++;
                while (left < right && nums[right] == nums[right - 1])
                    right--;
                left++;
                right--;
            }
            else if (sum < 0)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
    }
    return ans;
}

int main()
{
    vector<int> arr{-1, 0, 1, 2, -1, -4};
    int target = 0;

    vector<vector<int>> ans;
    ans = threeSum2(arr, target);

    cout << endl;

    return 0;
}

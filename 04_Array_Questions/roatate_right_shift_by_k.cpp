#include <bits/stdc++.h>
using namespace std;

void print(vector<int> nums)
{
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
}

//////---- right shift by k position rotate by k element ----////////

// brute force way tc :- (n * k) and sc:- (1)
void rotateByK(vector<int> &nums, int k)
{
    int n = nums.size();
    k = k % n;

    for (int i = 0; i < k; i++)
    {

        int lastEle = nums[n - 1];

        for (int j = n - 1; j > 0; j--)
        {
            nums[j] = nums[j - 1];
        }
        nums[0] = lastEle;
    }
}

// optimized version tc:- (n) and sc:- (n)
void rotateByK1(vector<int> &nums, int k)
{
    int n = nums.size();
    k = k % n;

    vector<int> ans;

    for (int i = n - k; i < n; i++)
    {
        ans.push_back(nums[i]);
    }

    for (int i = 0; i < n - k; i++)
    {
        ans.push_back(nums[i]);
    }
    nums = ans;
}

// final optimized tc:- (n) and sc:- (1)

void reverse(vector<int> &arr, int l, int r)
{
    while (l < r)
    {
        swap(arr[l], arr[r]);
        l++;
        r--;
    }
}

void rotateByK2(vector<int> &nums, int k)
{
    int n = nums.size();

    k = k % n;

    // Step 1: reverse whole array
    reverse(nums, 0, n - 1);

    // Step 2: reverse first k elements
    reverse(nums, 0, k - 1);

    // Step 3: reverse remaining elements
    reverse(nums, k, n - 1);
}

int main()
{
    vector<int> nums{1, 2, 3, 4, 5, 6, 7, 8};

    cout << "Before rotate array" << endl;
    print(nums);

    cout << "After rotating array is" << endl;
    rotateByK2(nums, 2);
    print(nums);

    return 0;
}

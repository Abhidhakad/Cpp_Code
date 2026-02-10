#include <bits/stdc++.h>

using namespace std;

void merge(vector<int> &num1, vector<int> &nums2)
{
    int n = nums1.size();
    int m = nums2.size();

    int i = m - 1;
    int j = n - 1;
    int k = (m + n) - 1;

    while (i >= 0 && j >= 0)
    {
        if (nums1[i] > nums2[j])
        {
            nums1[k] = nums1[i];
            i--, k--;
        }
        else
        {
            nums1[k] = nums2[j];
            j--, k--;
        }
    }

    while (j >= 0)
    {
        nums1[k] = nums2[j];
        k--, j--;
    }
}

int main()
{
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    vector<int> num2 = {2, 5, 6};

    return 0;
}
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// brute force approch got TLE
int subArraySum(vector<int> arr, int k)
{
    int n = arr.size();

    int len = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += arr[k];
            }
            if (sum == k)
            {
                len++;
            }
        }
    }

    return len;
}

// optimized approch tc 0(n2)
int subArraySum1(vector<int> arr, int k)
{
    int n = arr.size();
    int len = 0;

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            if (sum == k)
            {
                len++;
            }
        }
    }
    return len;
}

// fully optimized using hashmap

int subArraySum2(vector<int> arr, int k)
{

    unordered_map<int, int> mp;
    mp[0] = 1;

    int prefixSum = 0;
    int count = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        prefixSum += arr[i];
        if (mp.count(prefixSum-k))
        {
            count += mp[prefixSum-k];
            mp[prefixSum]++;
        }
        else
        {
            mp[prefixSum]++;
        }
    }

    return count;
}

int main()
{
    vector<int> arr = {1, 2, 3};

    int k = 3;

    int len = subArraySum2(arr, k);

    cout << "length is " << len << endl;

    return 0;
}
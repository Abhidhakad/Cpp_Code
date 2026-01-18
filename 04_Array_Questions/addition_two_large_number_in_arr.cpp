#include <bits/stdc++.h>

using namespace std;

string calc_Sum(vector<int> &arr1, vector<int> &arr2)
{
    int n1 = arr1.size();
    int n2 = arr2.size();

    int i = n1 - 1;
    int j = n2 - 1;
    string ans;
    int carry = 0;
    while (i >= 0 && j >= 0)
    {
        int add = arr1[i] + arr2[j] + carry;
        int digit = add % 10;
        ans.push_back(digit + '0');
        carry = add / 10;
        i--;
        j--;
    }

    while (i >= 0)
    {
        int add = arr1[i] + 0 + carry;
        int digit = add % 10;
        ans.push_back(digit + '0');
        carry = add / 10;
        i--;
    }

    while (j >= 0)
    {
        int add = 0 + arr2[j] + carry;
        int digit = add % 10;
        ans.push_back(digit + '0');
        carry = add / 10;
        j--;
    }

    while (carry)
    {
        ans.push_back(carry % 10 + '0');
        carry = carry / 10;
    }

    while (ans[ans.size() - 1] == '0')
    {
        ans.pop_back();
    }

    reverse(ans.begin(), ans.end());

    return ans;
}

int main()
{
    vector<int> arr1{
        9,
        9};
    vector<int> arr2{
        9,
        9};

    calc_Sum(arr1, arr2);

    return 0;
}
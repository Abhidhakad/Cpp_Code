#include <bits/stdc++.h>
using namespace std;
vector<int> factorial(int n)
{
    vector<int> ans;
    ans.push_back(1);

    for (int i = 2; i <= n; i++)
    {
        int carry = 0;

        for (int j = 0; j < ans.size(); j++)
        {
            int mul = i * ans[j] + carry;
            ans[j] = mul % 10;
            carry = mul / 10;
        }

        while (carry)
        {
            ans.push_back(carry % 10);
            carry /= 10;
        }
    }

    reverse(ans.begin(), ans.end());

    for (int ele : ans)
    {
        cout << ele;
    }
    cout << endl;
    return ans;
}

int main()
{
    int n = 100;

    factorial(n);

    return 0;
}

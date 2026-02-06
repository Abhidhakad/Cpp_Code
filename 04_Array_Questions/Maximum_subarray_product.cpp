#include <iostream>
#include <vector>

using namespace std;


// variation of kadens algorithm we are doing this two times becuase we array negetive element also present
int maxProduct(vector<int> &nums)
{

    int n = nums.size();

    int maxProduct1 = INT_MIN;
    int currProduct1 = 1;
    for (int i = 0; i < n; i++)
    {
        currProduct1 *= nums[i];
        maxProduct1 = max(maxProduct1, currProduct1);
        if (currProduct1 == 0)
            currProduct1 = 1;
    }

    int maxProduct2 = INT_MIN;
    int currProduct2 = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        currProduct2 *= nums[i];
        maxProduct2 = max(maxProduct2, currProduct2);
        if (currProduct2 == 0)
            currProduct2 = 1;
    }

    return max(maxProduct1, maxProduct2);
}

int main()
{
    vector<int> arr = {1, 2, 3};

    int maxProductAns = maxProduct(arr);

    cout << "length is " << maxProductAns << endl;

    return 0;
}
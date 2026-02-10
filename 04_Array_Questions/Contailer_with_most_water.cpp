#include <bits/stdc++.h>
using namespace std;

// bruteforce method
int maxArea(vector<int> &height)
{
    int maxWaterArea = 0;
    int n = height.size();

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int w = j - i;
            int ht = min(height[i], height[j]);
            maxWaterArea = max(maxWaterArea, ht * w);
        }
    }

    return maxWaterArea;
}

//  optimized approch
int maxArea1(vector<int> &height)
{
    int maxWaterArea = 0;
    int n = height.size();
    int lp = 0;
    int rp = n - 1;
    while (lp < rp)
    {
        int w = rp - lp;
        int ht = min(height[lp], height[rp]);
        maxWaterArea = max(maxWaterArea, ht * w);
        height[lp] < height[rp] ? lp++ : rp--;
    }
    return maxWaterArea;
}

int main()
{
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    int maxWaterArea = maxArea1(height);

    cout << "max area " << maxWaterArea << endl;

    return 0;
}

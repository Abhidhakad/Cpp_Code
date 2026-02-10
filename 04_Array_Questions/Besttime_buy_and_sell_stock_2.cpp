#include <bits/stdc++.h>

using namespace std;

int maxProfit(vector<int> &prices)
{
    int maxProfit = 0;

    int bestBuy = prices[0];

    for (int i = 1; i < prices.size(); i++)
    {
        if (prices[i] > bestBuy)
        {
            maxProfit += prices[i] - bestBuy;
            if (i + 1 < prices.size())
            {
                bestBuy = prices[i];
            }
        }
        bestBuy = min(bestBuy, prices[i]);
    }

    return maxProfit;
}
int main()
{
    vector<int> prices{7, 1, 5, 3, 6, 4};
    int totalProfit = maxProfit(prices);

    cout << "Profit: " << totalProfit << endl;

    return 0;
}
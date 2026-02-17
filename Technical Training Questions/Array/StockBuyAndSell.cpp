// Stock Buy and Sell 
#include <iostream>
#include <algorithm>
using namespace std;

int maxProfit(int price[], int start, int end)
{
    // Base case
    if (end <= start)
        return 0;

    int profit = 0;

    for (int i = start; i < end; i++)
    {
        for (int j = i + 1; j <= end; j++)
        {
            if (price[j] > price[i])
            {
                int curr_profit = price[j] - price[i]
                                  + maxProfit(price, start, i - 1)
                                  + maxProfit(price, j + 1, end);

                profit = max(profit, curr_profit);
            }
        }
    }
    return profit;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Maximum Profit: "
         << maxProfit(arr, 0, n - 1);

    return 0;
}

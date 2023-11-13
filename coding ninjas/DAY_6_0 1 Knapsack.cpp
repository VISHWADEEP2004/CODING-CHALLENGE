0 1 Knapsack:

Sample Input:
1 
4
1 2 4 5
5 4 8 6
5
Sample Output:
13

OUTPUT:
  
#include <bits/stdc++.h> 
int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
	vector<int> dp(maxWeight + 1, 0);

    for (int i = 0; i < n; ++i) {
        for (int w = maxWeight; w >= weight[i]; w--) {
            dp[w] = max(dp[w], value[i] + dp[w - weight[i]]);
        }
    }

    return dp[maxWeight];
}

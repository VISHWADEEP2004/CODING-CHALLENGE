Minimum Value:

Sample Input 1 :
2
10 3 
4 5 2 9 8 1 1 7 10 3
7 7 
7 5 3 2 1 6 6 
Sample Output 2 :
1
6
Explanation of sample input 2:
Test case 1: 
If we consider the subset { 2, 1, 1 }, we will get the minimum required value.

Test case 2: 
The value of K is equal to N. Thus; we have to consider the complete array as the subset. 

  
#include <bits/stdc++.h> 
int minValue(vector<int>&arr, int n, int k)
{
	sort(arr.begin(), arr.end());

    int min_diff = INT_MAX;
    for (int i = 0; i <= n - k; ++i) {
        int diff = arr[i + k - 1] - arr[i];
        min_diff = min(min_diff, diff);
    }

    return min_diff;
}

Sample Input 1 :
1
5
3 2 -6 1 0
Sample Output 1:
4
Explanation for Input 1:
The first positive number is 1 and it is present in the array similarly 2 and 3 are also present in the array. 4 is missing from the array. Thus, the minimum positive integer that is missing is 4.
Sample Input 2 :
1
5
0 1 2 3 4
Sample Output 2:
5

OUTPUT:

#include <bits/stdc++.h> 
int firstMissing(int arr[], int n)
{
    unordered_set<int> seen;
    for (int i = 0; i < n; ++i) {
        if (arr[i] > 0) {
            seen.insert(arr[i]);
        }
    }
    
    int missing = 1;
    while (seen.find(missing) != seen.end()) {
        missing++;
    }

    return missing;
}

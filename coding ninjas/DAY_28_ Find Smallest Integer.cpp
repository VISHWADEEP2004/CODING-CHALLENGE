Sample Input 1:
2
4
1 2 3 4
2
1 3
Sample Output 1:
11
2
Explanation of Sample Input 1:
For the first test case, the smallest positive integer value that cannot be represented as a sum of elements of any subset of a given array is 11, as the integer from 1 to 10 can be represented as the sum of elements of any subset of the given array.

For the second test case, the possible values of integers that can be represented as the sum of elements of any subset of the given array are [1, 3, 4], the smallest missing positive integer from which is 2.
Sample Input 2:
2
4
1 1 1 1
6
1 2 6 10 11 15
Sample Output 2:
5
4

  OUTPUT:

#include <bits/stdc++.h> 
int findSmallestInteger(vector<int> arr)
{
    sort(arr.begin(),arr.end());
    int res=1;

    for(int i=0;i<arr.size()&& arr[i]<=res;i++)
    {
        res+=arr[i];
    }
    return res;

}

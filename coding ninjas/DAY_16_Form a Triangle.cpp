Sample Input 1 :
2
5
4 2 1 3 2
5
5 2 7 3 15
Sample Output 1:
YES
YES
Explanation of Sample Input 1:
In the first test case, if we choose the sides as { 2,3,4} or {2,2,1} or {2,2,3} then it is possible to form a non-degenerate triangle.

In the second test case, if we choose sides as {5,3,7}, then it is possible to form a non-degenerate triangle.
Sample Input 2:
2
5
12 3 7 4 28
4
7 12 9 20
Sample Output 2:
NO
YES
Explanation of Sample Input 2:
In the first test case, there is no possible way to choose three elements such that they will form the sides of a triangle.

In the second test case, if we choose the sides as {7,12,9} or {12,9,20}, then it is possible to form a non-degenerate triangle

OUTPUT:

#include <bits/stdc++.h> 
bool possibleToMakeTriangle(vector<int> &arr)
{
    sort(arr.begin(), arr.end());

    for (int i = 0; i <arr .size() - 2; i++) {
        if (arr[i] +arr [i + 1] > arr[i + 2]) {
            return true; 
        }
    }
    return false;
}

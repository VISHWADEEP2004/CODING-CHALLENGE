Non-Decreasing Array:

Sample Input 1 :
2
3
8 4 6
3
8 4 2
Sample Output 1 :
true
false
Explanation to Sample Input 1 :
For Test Case 1 we can have a possible non-decreasing array : 2 4 6
Where only the element at index 0 has been modified.

For Test Case 2 there is no possible way to make the array non-decreasing by modifying at most 1 element.
Sample Input 2 :
2
6
-2 7 -1 0 1 2
5
-10 10 0 10 3
Sample Output 2 :
true
false
Explanation to Sample Input 2 :
For Test Case 1 we can have a possible non-decreasing array : -2 -2 -1 0 1 2
Where only the element at index 1 has been modified

For Test Case 2 there is no possible way to make the array non-decreasing by modifying at most 1 element.

  OUTPUT:

#include <bits/stdc++.h> 
bool isPossible(int *arr, int n)
{
    int modifications = 0;

    for (int i = 1; i < n; ++i) {
        if (arr[i] < arr[i - 1]) {
            modifications++;
            
            if (modifications > 1) {
                return false;
            }
            
            if (i >= 2 && arr[i] < arr[i - 2]) {
                arr[i] = arr[i - 1]; 
            } else {
                arr[i - 1] = arr[i]; 
            }
        }
    }

    return true;
}

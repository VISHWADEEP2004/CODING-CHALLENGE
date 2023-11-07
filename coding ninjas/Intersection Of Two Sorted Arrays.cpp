Problem Statement

You are given two arrays 'A' and 'B' of size 'N' and 'M' respectively. Both these arrays are sorted in non-decreasing order. You have to find the intersection of these two arrays.

Intersection of two arrays is an array that consists of all the common elements Occurring in both arrays. 


Sample Input 1 :
2
6 4
1 2 2 2 3 4
2 2 3 3
3 2
1 2 3
3 4  
Sample Output 1 :
2 2 3
3   
Explanation for Sample Input 1 :
For the first test case, the common elements are 2 2 3 in both the arrays, so we print it.

For the second test case, only 3 is common so we print 3.


  OUTPUT:


#include <bits/stdc++.h> 
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
  	vector<int> intersection;
    int i = 0;
    int j = 0;

    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] == arr2[j]) {
            intersection.push_back(arr1[i]);
            i++;
            j++;
        } else if (arr1[i] < arr2[j]) {
            i++;
        } else {
            j++;
        }
    }

    return intersection;
}

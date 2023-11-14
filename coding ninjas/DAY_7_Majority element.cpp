Majority element:

Sample Input 1:
2
5
2 3 9 2 2
4
8 5 1 9 
Sample Output 1:
2
-1
Explanation of Sample Output 1:
In test case 1, frequencies of occurrences of different elements are:

2 → 3 times
3 → 1 time
9 → 1 time

As 2 occurs more than floor(5/2) (i.e. floor(2.5) = 2) times, it is the majority element.

In test case 2, frequencies of occurrences of different elements are:

8 → 1 time
5 → 1 time
1 → 1 time
9 → 1 time

As no element occurs more than floor(4/2) = 2 times. Thus No majority element is present.
Sample Input 2:
2
7
8 8 8 8 8 9 1 
4
2 2 3 3
Sample Output 2:
8
-1
Explanation of Sample Output 2:
In test case 1, frequencies of occurrences of different elements are:

8 → 5 times
9 → 1 time
1 → 1 time

As 8 occurs more than floor(7/2) (i.e. floor(3.5) = 3) times, it is the majority element.

In test case 2, frequencies of occurrences of different elements are:

2 → 2 times
3 → 2 times

As no element occurs more than floor(4/2) = 2 times. Thus No majority element is present.


  OUTPUT:

#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
    unordered_map<int, int> freq;

    int threshold = n / 2;

    for (int i = 0; i < n; ++i) {
        freq[arr[i]]++;
        if (freq[arr[i]] > threshold) {
            return arr[i];
        }
    }

    return -1;
}

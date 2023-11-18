 Missing and repeating element:

OUTPUT:

#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n) {
       vector<int> count(n, 0);

    int repeating = -1, missing = -1;

    for (int i = 0; i < n; ++i) {
        if (count[arr[i] - 1] == 1) {
            repeating = arr[i];
        }
        count[arr[i] - 1]++;
    }

    for (int i = 0; i < n; ++i) {
        if (count[i] == 0) {
            missing = i + 1;
            break;
        }
    }

    return {missing,repeating};
}

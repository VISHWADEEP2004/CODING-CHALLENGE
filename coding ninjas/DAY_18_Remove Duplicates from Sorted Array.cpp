Remove Duplicates from Sorted Array

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int removeDuplicates(vector<int> &arr, int n) {
	sort(arr.begin(), arr.end());
    
    arr.erase(unique(arr.begin(), arr.end()), arr.end());

    return arr.size();
}

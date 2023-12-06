Median of Two Sorted Arrays:

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        int t = n + m;
        std::vector<int> merged(t);
        
        merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), merged.begin());

        if (t % 2 == 0) {
            return (merged[t / 2 - 1] + merged[t / 2]) / 2.0;
        }
         else {
            return merged[t / 2];
        }
    }
};

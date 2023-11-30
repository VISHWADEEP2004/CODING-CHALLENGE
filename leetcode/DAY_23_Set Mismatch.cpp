Set Mismatch:

You have a set of integers s, which originally contains all the numbers from 1 to n. Unfortunately, due to some error, one of the numbers in s got duplicated to another number in the set, which results in repetition of one number and loss of another number.

You are given an integer array nums representing the data status of this set after the error.

Find the number that occurs twice and the number that is missing and return them in the form of an array.

 

Example 1:

Input: nums = [1,2,2,4]
Output: [2,3]
Example 2:

Input: nums = [1,1]
Output: [1,2]

  OUTPUT:

  class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
       int n = nums.size();
       vector<int> result;
       int duplicate = -1 ,missing = -1;
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] == nums[j]) {
                    duplicate = nums[i];
                    break;
                }
            }
            if (duplicate != -1) 
                break;
        }
        
       int sum = 0;
        for (int i=0;i<n;i++) {
            sum += nums[i];
        }
        int totalSum = n * (n + 1) / 2;
        missing = totalSum - sum + duplicate;

        result.push_back(duplicate);
        result.push_back(missing);

        return result;

    }
};

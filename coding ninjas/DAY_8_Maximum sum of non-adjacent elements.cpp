Sample Input 1:
2
3
1 2 4
4
2 1 4 9
Sample Output 1:
5
11
Explanation to Sample Output 1:
In test case 1, the sum of 'ARR[0]' & 'ARR[2]' is 5 which is greater than 'ARR[1]' which is 2 so the answer is 5.

In test case 2, the sum of 'ARR[0]' and 'ARR[2]' is 6, the sum of 'ARR[1]' and 'ARR[3]' is 10, and the sum of 'ARR[0]'
  and 'ARR[3]' is 11. So if we take the sum of 'ARR[0]' and 'ARR[3]', it will give the maximum sum of sequence in which 
no elements are adjacent in the given array/list.
Sample Input 2:
2
5
1 2 3 5 4
9
1 2 3 1 3 5 8 1 9
Sample Output 2:
8
24
Explanation to Sample Output 2:
In test case 1, out of all the possibilities, if we take the sum of 'ARR[0]', 'ARR[2]' and 'ARR[4]',
  i.e. 8, it will give the maximum sum of sequence in which no elements are adjacent in the given array/list.

In test case 2, out of all the possibilities, if we take the sum of 'ARR[0]', 'ARR[2]', 'ARR[4]', 
  'ARR[6]' and 'ARR[8]', i.e. 24 so, it will give the maximum sum of sequence in which no elements are adjacent in the given array/list.

  OUTPUT:

  #include <bits/stdc++.h> 
int maximumNonAdjacentSum(vector<int> &nums){
    int n = nums.size();
    

    if (n <= 0)
         return 0;

    if (n == 1) 
        return max(0, nums[0]); 
    int incl = nums[0]; 
    int excl = 0; 
    for (int i = 1; i < n; i++) {
        int temp = incl;
        incl = max(excl + nums[i], incl);
        excl = temp;
    }

    return max(incl, excl);
}

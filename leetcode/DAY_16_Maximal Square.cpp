Given an m x n binary matrix filled with 0's and 1's, find the largest square containing only 1's and return its area.

 

Example 1:


Input: matrix = [["1","0","1","0","0"],["1","0","1","1","1"],["1","1","1","1","1"],["1","0","0","1","0"]]
Output: 4
Example 2:


Input: matrix = [["0","1"],["1","0"]]
Output: 1
Example 3:

Input: matrix = [["0"]]
Output: 0

  OUTPUT:

class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int n = matrix.size();
        if (n == 0) 
            return 0;
        int m = matrix[0].size();

        int max = 0;
        vector<vector<int>> mat(n,vector<int>(m, 0));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (i == 0 || j == 0 || matrix[i][j] == '0') {
                    mat[i][j] = matrix[i][j] - '0';
                } else {
                    mat[i][j] = min({mat[i - 1][j - 1], mat[i - 1][j], mat[i][j - 1]}) + 1;
                }

                if (mat[i][j] > max) {
                    max = mat[i][j];
                }
            }
        }
        return max * max;
    }
};

Boolean Matrix

Given a boolean matrix of size RxC where each cell contains either 0 or 1, modify it such that if a matrix cell matrix[i][j] is 1 then all the cells in its ith row and jth column will become 1.

Example 1:

Input:
matrix[][] = {{1, 0},
              {0, 0}}
Output: 
1 1
1 0 
Explanation:
Only cell that has 1 is at (0,0) so all 
cells in row 0 are modified to 1 and all 
cells in column 0 are modified to 1.

Example 2:

Input:
matrix[][] = {{ 1, 0, 0},
              { 1, 0, 0},
              { 1, 0, 0},
              { 0, 0, 0}}
Output: 
1 1 1
1 1 1
1 1 1
1 0 0 
Explanation:
The position of cells that have 1 in
the original matrix are (0,0), (1,0)
and (2,0). Therefore, all cells in row
0,1,2 are and column 0 are modified to 1. 
Your Task:
You dont need to read input or print anything. Complete the function booleanMatrix() that takes the matrix as input parameter and modifies it in-place.

Expected Time Complexity: O(R * C)
Expected Auxiliary Space: O(R + C) 

Constraints:
1 ≤ R, C ≤ 1000
0 ≤ matrix[i][j] ≤ 1

  OUTPUT:

 void booleanMatrix(vector<vector<int> > &matrix)
    {
        int rows = matrix.size();
        int cols = matrix[0].size();
        
        bool firstrow = false;
        bool firstcol = false;
        
        for(int i=0;i<rows;i++){
            if(matrix[i][0]==1){
                firstrow=true;
                break;
            }
        }
        for(int i=0;i<cols;i++){
            if(matrix[0][i]==1){
                firstcol=true;
                break;
            }
        }
        for(int i=1;i<rows;i++){
            for(int j=1;j<cols;j++){
                if(matrix[i][j]==1){
                    matrix[i][0]=1;
                    matrix[0][j]=1;
                }
            }
        }
        for(int i=1;i<rows;i++){
            for(int j=1;j<cols;j++){
                if(matrix[i][0]==1 ||matrix[0][j]==1){
                    matrix[i][j]=1;
                }
            }
        }
        if(firstrow){
            for(int i=0;i<rows;i++){
                matrix[i][0]=1;
            }
        }
        if(firstcol){
            for(int i=0;i<cols;i++){
                matrix[0][i]=1;
            }
        }
        
    }

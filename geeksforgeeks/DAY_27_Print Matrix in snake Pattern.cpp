Input:
N = 3 
matrix[][] = {{45, 48, 54},
             {21, 89, 87}
             {70, 78, 15}}
Output: 
45 48 54 87 89 21 70 78 15 
Explanation:
Matrix is as below:
45 48 54
21 89 87
70 78 15
Printing it in snake pattern will lead to 
the output as 45 48 54 87 89 21 70 78 15.

  OUTPUT:
class Solution
{   
    public:
    //Function to return list of integers visited in snake pattern in matrix.
    vector<int> snakePattern(vector<vector<int> > matrix)
    {   
       int n = matrix.size();
       int m = matrix[0].size();
       
       vector<int> result;
       
       bool flag=true;
       for(int i=0;i<n;i++){
           if(flag){
               for(int j=0;j<m;j++){
                   result.push_back(matrix[i][j]);
               }
           }
           else{
               for(int j=m-1;j>=0;j--){
                   result.push_back(matrix[i][j]);
               }
           }
           flag=!flag;
       }
       return result;
    }
};

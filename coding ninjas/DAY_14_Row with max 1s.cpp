Row with max 1s:

Sample Input 1 :>
3 3
1  1  1
0  0  1
0  0  0
Sample Output 1 :>
0
Explanation of Input 1 :>
The 0th row of the given matrix has the maximum number of ones.
Sample Input 2:>
2 2
1  1
1  1
Sample Output 2:>
0
Explaination of Sample Output 2:>
The 0th and 1st rows of the given matrix have the maximum number of ones, so we will output the lower index value.
Sample Input 3 :>
2 1
0
0
Sample Output 3 :>
-1
Explaination of Sample Output 3:>
No row is present where at-least one '1' is present. Hence the answer is -1.
Constraints :>
1 ≤ N, M ≤ 100
0 ≤ ARR[i][j] ≤ 1

Where ARR[i][j] denotes the matrix elements.

  OUTPUT:

int rowWithMax1s(vector<vector<int>> &matrix, int n, int m)
{
    int maxone=0;
    int maxoneind=-1;
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<m;j++){
            if(matrix[i][j]==1)
                count++;
        }
        if(maxone < count){
            maxone=count;
            maxoneind=i;
        }
    }
    return maxoneind;
}

#include <bits/stdc++.h> 
bool unAssaignedcell(int grid[][9],int &row,int &col)
{
    for(row=0;row<9;row++)
    {
        for(col=0;col<9;col++)
        {
            if(grid[row][col]==0)
                return true;
        }
    }
    return false;
}
bool checkrow(int row,int num,int grid[][9]){
    for(int j=0;j<9;j++){
        if(grid[row][j]==num)
            return false;
    }
    return true;
}
bool checkcol(int col,int num,int grid[][9]){
    for(int i=0;i<9;i++){
        if(grid[i][col]==num)
            return false;
    }
    return true;
}
bool checksubmatrix(int row, int col,int grid[][9],int num)
{
    for (int i = row; i < (row + 3); i++)
    {
        for (int j = col; j < (col + 3); j++)
        {
            if (grid[i][j] == num)
                return false;
        }
    }
    return true;
}

bool issafe(int row,int col,int grid[][9],int num){
    if(checkrow(row,num,grid) && checkcol(col,num,grid) && checksubmatrix(row-row%3,col-col%3,grid,num)&&grid[row][col]==0)
        return true;
    return false;
}
bool sudokusolver(int grid[][9]){
    int row,col;
    if(unAssaignedcell(grid,row,col)==false)
        return true;
    for(int num=1;num<=9;num++){
        if(issafe(row,col,grid,num)){
            grid[row][col]=num;
            if(sudokusolver(grid))
                return true;
            grid[row][col]=0;
        }
    }
    return false;

}
void solveSudoku(vector<vector<int>>& sudoku)
{
	int grid[9][9];
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            grid[i][j]=sudoku[i][j];
        }
    }
    if(sudokusolver(grid)){
    for(int i=0;i<9;i++){
            for (int j = 0; j < 9; j++) {
                sudoku[i][j] = grid[i][j];
            }
    }
    }
}

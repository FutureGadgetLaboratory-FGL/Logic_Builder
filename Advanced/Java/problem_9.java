# Make a sudoku solver.
#Prashant9420
class Solution {
    public void solveSudoku(char[][] board) {
        if(board == null || board.length == 0)
            return;
        Solver(board);
    }
    private static boolean Solver(char[][] board){
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(board[i][j]=='.')
                {
                    for(char c='1';c<='9';c++)
                    {
                        if(isValid(board,i,j,c))
                        {
                            board[i][j]=c;
                            if(Solver(board))
                            {
                                return true;
                            }
                            else
                                board[i][j]='.';
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    private static boolean isValid(char[][] board, int row, int col,char c) {

//      row check
    for(int i=0;i<9;i++)
    {
        if(board[row][i]==c)
        {
            return false;
        }
    }
//    column check
    for(int i=0;i<9;i++)
        {
            if(board[i][col]==c)
            {
                return false;
            }
        }
//    diagonal check
        int rowStart=row-row%3;
        int colStart=col-col%3;
        for(int i=rowStart;i<rowStart+3;i++)
        {
            for(int j=colStart;j<colStart+3;j++)
            {
                if(board[i][j]==c)
                {
                    return false;
                }
            }
        }
        return true;
    }
}

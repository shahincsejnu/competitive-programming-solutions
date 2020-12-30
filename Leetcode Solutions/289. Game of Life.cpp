class Solution {
public:
    bool is_ok(int row, int column, int i, int j){
        return i >= 0 && i < row && j >= 0 && j < column;
    }
    
    void gameOfLife(vector<vector<int>>& board) {
        int row = board.size(), column = board[0].size();
        
        int dx[] = {+0, +0, +1, +1, +1, -1, -1, -1};
        int dy[] = {+1, -1, +0, +1, -1, +0, +1, -1};
        
        for(int i = 0; i < row; i++){
            for(int j = 0; j < column; j++){
                if(board[i][j] == 2 || board[i][j] == 3) continue;
                
                int one = 0;
                
                for(int k = 0; k < 8; k++){
                    int x = i+dx[k], y = j+dy[k];
                    
                    if(is_ok(row, column, x, y)){
                        if(board[x][y] == 1 || board[x][y] == 2) one++;
                    }
                }
                
                if(one <= 1 && board[i][j]) board[i][j] = 2;
                else if(one > 3 && board[i][j]) board[i][j] = 2;
                else if(one == 3 && !board[i][j]) board[i][j] = 3;
            }
        }
        
        for(int i = 0; i < row; i++){
            for(int j = 0; j < column; j++){
                if(board[i][j] == 2) board[i][j] = 0;
                if(board[i][j] == 3) board[i][j] = 1;
            }
        }
    }
};
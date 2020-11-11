class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        int row = A.size();
        
        if(row == 0) return A;
        
        int col = A[0].size();
        
        for(int i = 0; i < row; i++) reverse(A[i].begin(), A[i].end());
        
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                A[i][j] = !A[i][j];
            }
        }
        
        return A;
    }
};
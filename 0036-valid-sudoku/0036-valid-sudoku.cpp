class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char>row[9],col[9],box[9];
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]=='.'){
                    continue;
                }
                char value=board[i][j];
                int index=(i/3)*3+j/3;

                if(row[i].count(value) || col[j].count(value) || box[index].count(value)){
                    return false;
                }
                  
                  row[i].insert(value);
                  col[j].insert(value);
                  box[index].insert(value);
            }

        }
        return true;
    }
};
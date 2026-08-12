class Solution {
   public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>> rows(9);
        vector<unordered_set<char>> cols(9);
        vector<unordered_set<char>> boxes(9);
        int box_cal;
        int n=board.size();
        int m=board[0].size();

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                box_cal=((i/3)*3)+(j/3);
                char ch=board[i][j];
                if(ch=='.'){
                    continue;
                }
                if((rows[i].count(ch))){
                    return false;
                }
                rows[i].insert(ch);
                if((cols[j].count(ch))){
                    return false;
                }
                cols[j].insert(ch);
                if((boxes[box_cal].count(ch))){
                    return false;
                }
                boxes[box_cal].insert(ch);
            }
        }
        return true;
    }
};

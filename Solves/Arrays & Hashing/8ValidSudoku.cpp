class Solution {
public:
    bool check(map<char,int>& hamba){
        for(char c='0';c<='9';c++) {
            if(hamba[c]>1) return false;
        }
        return true;
    }
    void nullFr(map<char,int>& hamba){
        for(char c='0';c<='9';c++) hamba[c]=0;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        map<char,int> fr;
        int i,j;
        nullFr(fr);
        for(i=0;i<9;i++){
            for(j=0;j<9;j++)
                fr[board[i][j]]++;
            if(!check(fr)) return false;
            nullFr(fr);
        }
        for(i=0;i<9;i++){
            for(j=0;j<9;j++)
                fr[board[j][i]]++;
            if(!check(fr)) return false;
            nullFr(fr);
        }
        for(i=0;i<9;i++){
            for(j=0;j<3;j++){
                fr[board[i][j]]++;
            }
            if((i+1)%3==0){
                if(!check(fr)) return false;
                nullFr(fr);
            }
        }
        for(i=0;i<9;i++){
            for(j=3;j<6;j++){
                fr[board[i][j]]++;
            }
            if((i+1)%3==0){
                if(!check(fr)) return false;
                nullFr(fr);
            }
        }
        for(i=0;i<9;i++){
            for(j=6;j<9;j++){
                fr[board[i][j]]++;
            }
            if((i+1)%3==0){
                if(!check(fr)) return false;
                nullFr(fr);
            }
        }

        return true;
    }
};

class Solution {
public:
    bool check(int i,int j,vector<vector<char>> & board ,string word ,int x ,int n ,int m ){
        if(x == word.size()){
            return true ;
        }
        if( i>=0 && j>=0 && j<m && i<n && word[x]==board[i][j]){
            char temp = word[x];
            board[i][j] = '#' ; 
            bool ans = check(i , j-1 , board , word , x+1, n , m) ||
                        check(i , j+1 , board , word , x+1, n , m)||
                        check(i-1 , j , board , word , x+1, n , m)||
                        check(i+1 , j , board , word , x+1, n , m);
            board[i][j] = temp ;
            return ans ; 
        }
        return false ; 
    }
    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size();
        int m = board[0].size();
        for(int i = 0 ; i< n ; i++){
            for(int j=0 ; j<m ; j++){
                if ( check(i,j,board , word , 0 , n , m) ) 
                return true ; 
            }
        }
        return false ; 
    }
};
class Solution {
public:
    bool solver(vector<vector<char>>& board , int i , int j ){
        if(j==9){
            return solver( board , i+1 , 0 );
            
        }
        if(i == 9){
            return true ;
        }
        if(board[i][j] != '.'){
            return solver( board , i , j+1 );
        }
        for(int x = 0 ; x < 9 ; x++){
            if(check(board , i , j , '1'+x )){
                board[i][j] = '1'+x ; 
                if(solver( board , i , j+1 )){
                    return true ; 
                }
                board[i][j] = '.';
            }
        }
        return false ; 
    }
    bool check(vector<vector<char>>& board ,int i ,int j , char k ){
        for(int x = 0 ; x < 9 ; x ++ ){
            if(board[i][x] == k ){
                return false ; 
            }
            if(board[x][j] == k ){
                return false ; 
            }
        }
        int a = (i/3)*3 ;
        int b = (j/3)*3 ; 
        for(int x = 0 ; x < 3 ; x++ ){
            for(int y = 0 ; y < 3 ; y++){
                if(board[a+x][b+y] == k){
                    return false ;
                } 
            }
        }
        return true ;  
    }
    void solveSudoku(vector<vector<char>>& board) {
        solver(board , 0 , 0 );
    }
};
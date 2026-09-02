class Solution {
public:
    void backtrack( vector<vector<string>> &ans ,int n ,int i , vector<string> &temp ){
        if( i == n ){
            ans.push_back(temp);
            return ; 
        }
        for(int x = 0 ; x < n ; x++ ){
            if(place(temp , x , i )){
                string a (n,'.');
                a[x] = 'Q';
                temp.push_back(a) ; 
                backtrack(ans , n , i+1 , temp );
                temp.pop_back();
            }
        }
    }
    bool place(vector<string>& temp, int x, int i) {
        for(int r = 0; r < i; r++) {
            int c = temp[r].find('Q');
            if(c == x)
                return false;
            if(abs(r - i) == abs(c - x))
                return false;
        }
        return true;
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans ; 
        vector<string> temp ;
        backtrack(ans , n , 0 , temp );
        return ans ; 
    }
};
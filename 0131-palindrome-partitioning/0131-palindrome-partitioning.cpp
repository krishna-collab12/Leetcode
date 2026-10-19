class Solution {
public:
    void recurrsion(string &s ,vector<vector<string>> &ans ,string abc ,vector<string> temp , int n , int i ){
        if(i==n){
            if(abc == "" ){
                ans.push_back(temp); 
            }  
            return ;  
        }
        abc += s[i];
        if(check(abc)){
            temp.push_back(abc);
            recurrsion(s ,ans ,"", temp, n , i+1 );
            temp.pop_back();
        }
        recurrsion(s ,ans ,abc, temp, n , i+1 );
    }
    bool check(string x){
        int high = x.length() - 1;
        int low = 0 ; 
        while(low < high){
            if(x[low++] != x[high--]){
                return false ; 
            }
        }
        return true ;
    } 
    vector<vector<string>> partition(string s) {
        int n = s.length();
        vector<vector<string>> ans ; 
        vector<string> temp ;
        recurrsion(s ,ans ,"", temp, n , 0 );
        return ans ; 
    }
};
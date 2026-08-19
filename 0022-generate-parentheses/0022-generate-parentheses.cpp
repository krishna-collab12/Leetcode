class Solution {
public:
    void generate(int start , int end , vector<string> &ans , string cur){
        if(start == 0 ){
            while(end){
                cur = cur + ')' ; 
                end-- ; 
            }
            ans.push_back(cur); 
            return ; 
        }
        generate (start-1 , end , ans , cur + '(' ) ; 
        if(start < end)
        generate (start , end -1  , ans , cur + ')' ) ; 
    }
    vector<string> generateParenthesis(int n) {
        int start = n ;
        int end = n ;
        vector<string> ans ; 
        generate(start , end , ans , "") ; 
        return ans ; 
    }
};
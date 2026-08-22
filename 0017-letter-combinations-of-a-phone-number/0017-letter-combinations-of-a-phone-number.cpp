class Solution {
public:
    void combo(string &digits , int k , vector<string> &ans , vector<string> &arr , string temp ,int n ){
        if(k == n){
            ans.push_back(temp);
            return ; 
        }
        string abc = arr[digits[k] - '2' ] ; 
        for(auto i : abc){
            combo(digits, k+1 ,ans , arr ,temp + i ,n );
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> arr ;
        arr.push_back("abc");
        arr.push_back("def");
        arr.push_back("ghi");
        arr.push_back("jkl");
        arr.push_back("mno");
        arr.push_back("pqrs");
        arr.push_back("tuv");
        arr.push_back("wxyz");
        int n = digits.length();
        vector<string> ans ; 
        combo(digits , 0 , ans , arr , "" , n );
        return ans ; 
    }
};
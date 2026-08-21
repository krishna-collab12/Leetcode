class Solution {
public:
    void combo(vector<vector<int>> &ans ,vector<int> arr ,int sum ,int i , int n ,int target , int k ){
        if(sum == target && k == n ){
            ans.push_back(arr);
            return ; 
        }
        else if( sum + i > target ){
            return ; 
        }
        if(i == 10 || k == n ){
            return ; 
        }
        arr.push_back(i);
        combo(ans , arr , sum + i , i+1 , n+1 , target , k );
        arr.pop_back();
        combo(ans , arr , sum , i+1 , n , target , k );
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        int low = k*(k+1) / 2 ;
        int high = (9-k)*k + low ; 
        vector<vector<int>> ans ; 
        vector<int> arr ; 
        if(n < low || n > high ){
            return ans; 
        }
        combo(ans,arr,0,1,0,n,k);
        return ans ; 
    }
};
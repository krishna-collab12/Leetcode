class Solution {
public:
    void combo(vector<vector<int>> &ans ,vector<int> arr ,int sum ,vector<int> &nums ,int i ,int target , int n ){
        if(i == n){
            return ; 
        }
        if(sum == target){
            ans.push_back(arr);
            return ; 
        }
        else if( sum > target ){
            return ; 
        }
        arr.push_back(nums[i]);
        combo(ans , arr , sum + nums[i], nums, i , target , n );
        arr.pop_back();
        combo(ans , arr , sum , nums , i+1 , target ,n);
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans ;
        int n = candidates.size();
        vector<int> arr ;     
        combo(ans , arr , 0 , candidates , 0 , target ,n );
        return ans ; 
    }
};
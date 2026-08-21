class Solution {
public:
    void combo(vector<vector<int>> &ans ,vector<int> arr ,int sum ,vector<int> &nums ,int i ,int target , int n ){
        if(sum == target){
            ans.push_back(arr);
            return ; 
        }
        else if( sum > target ){
            return ; 
        }
        if(i == n){
            return ; 
        }
        if(sum + nums[i] > target)
        return;
        arr.push_back(nums[i]);
        combo(ans , arr , sum + nums[i], nums, i+1 , target , n );
        arr.pop_back();
        while( i<n-1 && nums[i] == nums[i+1]){
            i++ ; 
        }
        if(sum + nums[i] > target)
        return;
        combo(ans , arr , sum , nums , i+1 , target ,n);  
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin() , candidates.end());
        vector<vector<int>> ans ;
        int n = candidates.size();
        vector<int> arr ;     
        combo(ans , arr , 0 , candidates , 0 , target ,n );
        return ans ; 
    }
};
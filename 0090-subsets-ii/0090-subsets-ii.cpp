class Solution {
public:
    void subset(vector<vector<int>> &ans , vector<int> arr , vector<int> &nums , int n , int i){
        if(i == n){
            ans.push_back(arr);
            return ;
        }
        if(i > n){
            return ;
        }
        arr.push_back(nums[i]);
        subset(ans , arr , nums , n , i + 1 );
        arr.pop_back();
        while(i+1 < n && nums[i] == nums[i+1]){
            i++ ; 
        }
        subset(ans , arr , nums , n , i + 1 );

    }
    vector<vector<int> > subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        vector<int> arr ; 
        int n = nums.size();
        subset(ans , arr , nums , n , 0);
        return ans ;
        //your code goes here
    }
};
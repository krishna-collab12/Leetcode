class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans ;
        for(int i = 0 ; i < (1<<n) ; i++){
            vector<int> temp; 
            int x = 0 , a = i ;
            while(a){
                if(a&1)
                temp.push_back(nums[x]);
                x++ ; 
                a>>=1;
            }
            ans.push_back(temp);
        }
        return ans ; 
    }
};
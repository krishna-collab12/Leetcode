class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long long x = 0 ;
            int n = nums.size();
            for(int i = 0 ; i<n ; i++){
                x^= nums[i];
            } 
            x = x & -x;
            int a =0 , b=0 ;
            for(int i = 0 ; i<n ; i++){
                if(x&nums[i])
                    a^=nums[i];
                else 
                    b^=nums[i];
            } 
            return {a,b};
        
    }
};
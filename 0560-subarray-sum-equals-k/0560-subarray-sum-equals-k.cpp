class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int n = nums.size();
        int count = 0 ; 
        int sum = 0 ; 
        for(int i=0;i<n;i++){
            sum=sum+nums[i];
            if(sum == k){
                count ++ ;
            }
            int b = sum-k;
            if( mp.find(b) != mp.end() ){
                count += mp[b];
            }
            mp[sum]++;  
        }
        return count ;   
    }
};
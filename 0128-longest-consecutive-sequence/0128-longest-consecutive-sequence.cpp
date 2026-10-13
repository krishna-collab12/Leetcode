class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st ;  
        for(int i: nums){
            st.insert(i);
        }
        int ans = 0 ; 
        for(int i : st){
            int count = 1 ; 
            if(st.find(i-1) != st.end()){}
            else {
                while(st.find(i+count) != st.end()){
                    count++ ; 
                }
            }
            ans = max(ans ,count);
        }
        return ans ; 

    }
};
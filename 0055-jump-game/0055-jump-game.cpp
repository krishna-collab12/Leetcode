class Solution {
public:
    bool jump(vector<int> &nums ,int i , vector<int> &x){
        if(i + nums[i] +1  < nums.size()){
            bool flag = 0 ;
            for(int y = 1 ; y <= nums[i] ; y++ ){
                if(x[y+i] == 0){
                    x[y+i] = 1 ;
                    flag =  jump(nums , i+y , x );
                    if(flag){
                        return 1 ; 
                    } 
                }
            }
            return 0;
        }
        else 
        return true ; 
    }
    bool canJump(vector<int>& nums) {
        vector<int> x(nums.size() , 0) ;
        x[0]==1 ; 
        return jump(nums , 0 , x );
    }
};
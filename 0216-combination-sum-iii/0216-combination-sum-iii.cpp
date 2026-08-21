class Solution {
public:
    void combo(vector<vector<int>> &ans ,vector<int> arr ,int sum ,int num , int count ,int target , int k ){
        if(sum == target && k == count ){
            ans.push_back(arr);
            return ; 
        }
        else if( sum + num > target ){
            return ; 
        }
        if(num == 10 || k == count ){
            return ; 
        }
        arr.push_back(num);
        combo(ans , arr , sum + num , num+1 , count+1 , target , k );
        arr.pop_back();
        combo(ans , arr , sum , num+1 , count , target , k );
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        // int low = k*(k+1) / 2 ;
        // int high = (9-k)*k + low ; 
        // if(n < low || n > high ){
        //     return ans; 
        // }
        vector<vector<int>> ans ; 
        vector<int> arr ; 
        combo(ans,arr,0,1,0,n,k);
        return ans ; 
    }
};
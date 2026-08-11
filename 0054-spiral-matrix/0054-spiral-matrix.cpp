class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int n = matrix.size();
        int m = matrix[0].size();
        int left = 0 , right = m-1 ; 
        int low = 0 , high = n-1 ;
        while(left < right && low < high ){ 
            for(int i = left ; i < right ; i++ ){
                ans.push_back(matrix[low][i]);
            }
            for(int i = low ; i < high ; i++ ){
                ans.push_back(matrix[i][right]);
            }
            for(int i = right ; i > left ; i-- ){
                ans.push_back(matrix[high][i]);
            }
            for(int i = high ; i > low ; i-- ){
                ans.push_back(matrix[i][left]);
            }
            left++;
            low++;
            high--;
            right--;   
        }
        if(high == low){
            while(left < right ){
                ans.push_back(matrix[low][left++]);
            }
        }
        if(left == right){
            while(low < high ){
                ans.push_back(matrix[low++][left]);
            }
        }
        if(left == right && low == high ){
            ans.push_back(matrix[low][left]);
        }
        return ans ; 
    }
};
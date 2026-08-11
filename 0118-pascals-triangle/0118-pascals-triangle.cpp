class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans ; 
        vector<int> temp ; 
        vector<int> temp2 ; 
        temp2={1};
        for(int i=0 ; i<numRows ; i++ ){
            temp = temp2 ;
            ans.push_back(temp);
            temp2.clear();
            temp2.push_back(1);
            for(int j = 1 ; j< temp.size();j++){
                int b = temp[j]+temp[j-1] ;
                temp2.push_back(b);
            }
            temp2.push_back(1);
        }
        return ans;    
    }
};